#include <bits/stdc++.h>
using namespace std;
int m,n;
int array[20][20]={0};
void fun(int count,int r,int c)
{
	int i,j;
	count=1;
	pair<int,pair<int,int> > p;
	queue< pair<int, pair<int,int> > >v;
	v.push(make_pair(count,make_pair(r,c)));
	while(!v.empty()){
		p=v.front();
		v.pop();
		count=p.first;
		r=p.second.first;
		c=p.second.second;
	if(array[r][c]==-2)
		continue;
	if(array[r][c]>0){
		continue;
	}
	else if(array[r][c]==-1){
		array[r][c]=count;
		for(i=-1;i<=1;i++){
			for(j=-1;j<=1;j++){
				if(j==0&&i==0)
					continue;
				if((r+i)>=0 && (r+i)<m && (c+j)>=0 && (c+j)<n)
				{
				v.push(make_pair(count+1,make_pair(r+i,c+j)));
				}
			}
		}
	}
  }
}


int main(){
	int i,j,k;
	int start,end;
	cin>>m>>n;
	char in;
	cin>>start>>end;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cin>>in;
			if(in=='W'){
				array[i][j]=-2;
			}
			else
				array[i][j]=-1;
			}
		}
	fun(1,start-1,end-1);
	int max=-5;
	for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	if(max<array[i][j])
	max=array[i][j];
	}
	cout<<max;
}
