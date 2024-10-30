#include<bits/stdc++.h>
using namespace std;
 int main(){
             long long  n,q;
                cin>>n>>q;
                long long  ar [n];
                   for(int i = 0; i<n;i++){
                       cin>>ar[i];
                   };

               long long  arr[n];
             long long sum =  0;
                 for(int i  = 0 ;i<n;i++){
                        arr[i]  = sum+=ar[i];
                 };
                   
                   while (q--)
                   {
                    long long sum = 0; 
                      long long  l,r;
                       cin>>l>>r;
                       l--;
                       r--;
                         if(l==0){
                             sum  = arr[r];
                         }else{
                               sum = arr[r] - arr[l-1];
                         }
                   
                     cout<<sum<<endl;
                   };
                   
     return 0;
 }