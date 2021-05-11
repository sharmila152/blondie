#include<iostream.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int arr[n];
        for(i=1;i<n;i++)
        {
            cin>>arr[i];
        }
        int prefix[n];
        prefix[1]=arr[1];
        for(i=2;i<n;i++)
        {
            prefix[i]=prefix[i-1]+arr[i];
        }
        int bullets[n];
        if(arr[i!=-1])
        bullets[i]=arr[i];
        else
        bullets[i]=prefix[i-1]/(i-1);
        cout<<bullets[i];

    }
}
