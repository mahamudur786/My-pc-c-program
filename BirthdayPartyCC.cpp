//https://www.codechef.com/CWRS2021/status/BP35

#include <bits/stdc++.h>
#include <vector>

#define ll long long

using namespace std;

void sort(vector<ll> &arr, int n)
{
    int i,j;
    ll x;
    for(int i = 1; i < n; i++)
    {
        x = arr[i];
        j = i-1;
        while(j > -1 && arr[j] > x)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = x;
    }
}

int main() {

    ll a;
	int x, y, z;

	cin>>a>>x>>y>>z;

	vector<ll> p, q, r, sum_c;

	for(int i = 0; i < x; i++)
	{
        ll t;	    
        cin>>t;
        p.push_back(t);
	}

	for(int i = 0; i < y; i++)
	{
        ll w;	    
        cin>>w;
        q.push_back(w);
	}

	for(int i = 0; i < z; i++)
	{
        ll m;	    
        cin>>m;
        r.push_back(m);
	}

	sort(p,x);
	sort(q,y);
	sort(r,z);

	for(int i = x-1; i > -1; i--)
	{
	    for(int j = y-1; j > -1; j--)
	    {
	        if(p[i] + q[j] >= a)
	            continue;
	        else
	            sum_c.push_back(p[i] + q[j]);
	    }
	}

    ll sum1 = -1;

    sort(sum_c,sum_c.size());

    for(int i = z -1; i > -1; i--)
    {
        for(int j = sum_c.size()-1; j > -1; j--)
        {
            if(r[i] + sum_c[j] <= a)
            {
               sum1 =  r[i] + sum_c[j];
               
               i = -1;
               break;
            }
        }
    }
    
     for(int i = z -1; i > -1; i--)
    {
        for(int j = sum_c.size()-1; j > -1; j--)
        {
            if(r[i] + sum_c[j] <= a)
                if(r[i] + sum_c[j] > sum1)
                    sum1 =  r[i] + sum_c[j];
        }
    }

	if(sum1 == -1)
        cout<<"-1"<<endl;
    else
        cout<<a-sum1<<endl;

	return 0;
}


