
#include<bits/stdc++.h>
#include<stdint.h>
// #define N 105
using namespace std;
void printArray(vector<int> arr, int size)
{
for (int i=0; i<size ; i++)
	cout << arr[i] << " ";
}


 // } Driver Code Ends
//User function Template for C++
// using namespace __gnu_pbds;
//using namepace __gnu_cxx;
#define ff              first
#define ss              second
// #define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define vpii            vector<pii>
#define mii             map<int,int>
#define pq              priority_queue
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int>>
#define fo(i,a,b)       for(int i=a;i<b;i++)           
#define setbits(x)      _buildin_popcountll(x)
#define zrobits(x)      _buildin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x ; cin>>x;while(x--)
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0)
// mt19937                 rng(chrono:: steady_clock::now().time_since_epoch().count());
#define ce 				cout<<"\n";

int wt(int arr[],int i,int j , int n)
{   int count=0;
    fo(k,i,j+1)
    {
        fo(l,k+1,j+1)
        { 
            // cout<<" l is "<<l<<" k is  "<<k<<endl;
            if(arr[k]==arr[l]) count++;
        }
    }
    return count;
}

int findwt(int arr[],int n)
{
    int sum=0;
    fo(i,0,n-1)
    {
        fo(j,i+1,n)
        {        
            // cout<<"i is "<<i<<" j is "<<j<<endl;
            sum+=wt(arr,i,j,n);
            // cout<<sum<<endl;
        }
    }
    return sum;
}

int32_t main()
{
	FIO;
	int t;
	cin>>t;
	while(t--)
	{
        int n;
        cin>>n;
        int arr[n];
        fo(i,0,n) cin>>arr[i];
        cout<<findwt(arr,n)<<"\n";

	}
	return 0;
}