// // // { Driver Code Starts
// // #include<bits/stdc++.h>
// // using namespace std;
// // void printPat(int n);

// // int main()
// // {
// // 	int t;
// // 	cin>>t;
// // 	while(t--)
// // 	{
// // 	int n;
// // 	cin>>n;
// //     printPat(n);
// //     cout<<endl;
// // 	}
// //     return 0;
// // }// } Driver Code Ends


// // /*You are required to complete this method*/
// // void printPat(int n)
// // {
// //     for(int i=n;i>0;i--)
// //     {
// //         for(int j=n;j>0;j--)
// //             for(int k=i;k>0;k--)
// //                 cout<<j<<" ";
// //         cout<<"$";
// //     }
// // //Your code here
// // }
// // { Driver Code Starts

// #include <bits/stdc++.h>
// using namespace std;
 
// string to_upper(string str);
 
// int main()
// {
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		string str1;
// 		cin>>str1;
// 		cout << to_upper(str1)<<endl;
// 	}
// sdkjfkljdsf kasdfj anonymous
// 	return 0;
// }// } Driver Code Ends



// string to_upper(string str){
//     //code
//     // for ( int i=0;i<str.length();i++)
//     // {  int a=str[i];
//     //   int b=a-32;
//     //   char c=b;
//     //     str[i]=c;
        
//     //   cout<<a<<" "<<b<<" "<<c<<" "<<str[i]<<endl;
//     // }
//     // return str;
//     for ( int i=0;i<str.length();i++)
//     {  int a=str[i];
//       int b=a-32;
//       char c=b;
//         str[i]=c;
//     }
//     return str;
// }

#include <iostream>
using namespace std;

int main() {
   ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    cout<<" dsfsdf ";
    while(t--)
    {
        int arr[4];
        int a;
        for(int k=0;k<4;k++)
        {  cout<<"+++++"<<endl;
            cin>>a;
            arr[k]=a;
        }
         for(int i=0;i++;i<4)
        {   cout<<arr[i]<<" ";
        }
        cout<<" ----- "<<endl;
        cout<<arr[0]<<" "<<arr[1];
        // int b=(arr[2]/arr[0]) + (arr[3]/arr[1]);
        cout<<arr[2]<<"\n";
        
    }
	// your code goes here
	return 0;
}