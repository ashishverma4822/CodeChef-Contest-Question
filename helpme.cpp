#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int matrix[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                for(int k=0;k<m;k++){
                    cout<<i<<" "<<j<<" "<<k<<endl;
                    if(matrix[i][k]!=0){
                        matrix[i][k]=-INT_MAX;
                    }
                }
            }
        }
    }
    return 0;
}

// for n=3 and m=3
//             [0 0 0]   
// matrix  =   [0 0 0]
//             [0 0 0]
// i j k
// 0 0 0
// 0 0 1
// 0 0 2
// 0 1 0
// 0 1 1
// 0 1 2
// 0 2 0
// 0 2 1
// 0 2 2
// 1 0 0
// 1 0 1
// 1 0 2
// 1 1 0
// 1 1 1
// 1 1 2
// 1 2 0
// 1 2 1
// 1 2 2
// 2 0 0
// 2 0 1
// 2 0 2
// 2 1 0
// 2 1 1
// 2 1 2
// 2 2 0
// 2 2 1
// 2 2 2