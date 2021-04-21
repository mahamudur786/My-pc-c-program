//https://talentbattle.in/blogs/coding-preparation-test-series/previously-asked-coding-questions-from-tcs-digital-part-5
//Happy Learning 
#include <bits/stdc++.h>
#include <vector>
#define ll long long
using namespace std;

int main(){
    ll N;
    cin >> N;
    int maze[N][N];  
    
    for(int i = 0; i < N; i++) 
    {
      for(int j = 0; j< N;j++)
      {
       cin >> maze[i][j] ; 
      }
    }
    
    int minWeightMatrix[N][N];
    minWeightMatrix[0][0] = maze[0][0]; //filling 0 0 element in new matrix
    
    for(int j = 1; j<N;j++) // filling 0th row of minWeightMatrix[][]
    {
      minWeightMatrix[0][j] = max(maze[0][j], minWeightMatrix[0][j-1]);
    }
    
    for(int i= 1; i<N;i++) // filling 0th column of minWeightMatrix[][]
    {
      minWeightMatrix[i][0] = max(maze[i][0], minWeightMatrix[i-1][0]);
    }
    
    for(int i = 1; i < N; i++)   // filling remaining elements of minWeightmatrix[][]
    {
      for(int j = 1; j< N; j++)
      {
        minWeightMatrix[i][j] = max(maze[i][j], min(minWeightMatrix[i-1][j], minWeightMatrix[i][j-1]));
      }
    }
    
   cout << minWeightMatrix[N-1][N-1] << endl;
    
return 0;
}

int max(int a, int b)
  {
    if(a > b)
      return a;
    return b;
  }
  
int min(int a, int b)
  {
    if(a < b)
      return a;
    return b;
  }

