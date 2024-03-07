#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int ifunction(){
    int n;
    cin >> n;
    int arrA[n];
    int arrB[n];
    int p;
    for (int i = 0; i < n; i++){
        cin >> p;
        arrA[i] = p;
    }
    for (int i = 0; i < n; i++){
        cin >> p;
        arrB[i] = p;
    }

    int start = -1, end = -1;
    for(int i = 0; i< n; i++){
        if(arrA[i] != arrB[i]){
            start = i;
            break;
        }
    }
    for(int i = n-1; i>=0; i--){
        if(arrA[i] != arrB[i] ){
            end = i;
            break;
        }
    }
    return end - start +1;
  
}

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int m = ifunction();
    cout << m << endl;
    }
    return 0;
}
