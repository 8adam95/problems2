#include <iostream>
#include<cstdio>
#include<vector>
#include<queue>
#include<algorithm> 
using namespace std;
 

const int MAXN = 1048576;
 
int n, a[MAXN], intervalTree[2*MAXN];
 
void read() {
        cin >> n;
        for(int i=0;i<n;i++) cin >> a[i];
}
 
void buildTree(int node) {
        if(node >= MAXN) { //sprawdzam czy node jest liściem
                intervalTree[node] = a[node-MAXN];
                return; //zawracam, żeby nie wyjść poza zakres danych
        }
 
        buildTree(node*2);
        buildTree(node*2+1);
 
        intervalTree[node] = intervalTree[node*2]+intervalTree[node*2+1]; //obliczam wartość w wierzchołku na podstawie synów
}
 
int query(int f, int s) { //query już jest iteracyjny
        f = f+MAXN; s = s+MAXN;
 
        if(f == s) return intervalTree[s];
 
        int res = intervalTree[f]+intervalTree[s];
 
        while(f/2 != s/2) {
                if(f%2 == 0) res = res+intervalTree[f+1];
                if(s%2 == 1) res = res+intervalTree[s-1];
                f = f/2; s = s/2;
        }
       
        return res;
}
 
void update(int f, int s) { //podstawiam a[f] := s
        int restore = a[f-1];
        a[f-1] = s;
       
        f += MAXN-1;   
        while(f != 0) {
                intervalTree[f] += s-restore;
                f = f/2;
        }
}
 
int main() {
        read();
       
        buildTree(1); //zaczynamy od korzenia i budujemy rekurencyjnie
 
        while(1) {
                char operationType; int f, s; //typ operacji: Q - zapytanie o sumę (f,s), U - zamienia a[f] na s, E - exit
                cin >> operationType >> f >> s;
 
                if(operationType == 'Q') cout << query(f-1,s-1) << endl; //indeksuje od 0
               
                if(operationType == 'U') update(f,s);
               
                if(operationType == 'E') return 0;
        }
        return 0;
}