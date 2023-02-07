#include<bits/stdc++.h>
#define lli long long int
#define INF 2000000000


using namespace std;

const int N = 200001;
int arr[N];
int st[4*N];
 
int build(int i , int start , int end)
{
	if(start == end){
        return st[i] = arr[start];
    }
	
	int mid = (start + end) / 2;
	
	return st[i] = min(build(2*i , start , mid) , build(2*i+1 , mid+1 , end));
}
 
int getMin(int si , int ss , int se , int l , int r)
{
	if(l > se || r < ss) return INF;
	
	if(ss >= l && se <= r) return st[si];
	
	int mid = (ss + se) >> 1;
	return min(getMin(2*si , ss , mid , l , r) , getMin(2*si+1 , mid+1 , se , l , r));
}
 
int main()
{
	int n , q , a , b;
	cin>>n>>q;
	
	for(int i =1; i<= n;i++){
        cin>>arr[i];
    } 
	
	build(1 , 1 , n);
	while(q--)
	{
		cin>>a>>b;
		cout<<getMin(1 , 1 , n , a , b)<<endl;
	}
}