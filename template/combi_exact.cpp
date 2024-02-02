#include <bits/stdc++.h>

using namespace std;

void combi_exact(int n, vector<int> &sol,int len,int k, int chosen){
    if (len < n){
        if (len - chosen < n - k){
            sol[len] = 0;
            combi_exact(n, sol, len + 1, k, chosen);
        }
        if (chosen < k){
            sol[len] = 1;
            combi_exact(n, sol, len + 1, k, chosen + 1);
        }
    }
    else{
        for (int i = 0; i < n; i++)
            if (sol[i] == 1)
                cout << i << " ";
        cout << endl;
    }
}

int main(){
    int n=5;
    int k=2;
    vector<int> sol(n);
    combi_exact(n,sol,0,k,0);
}