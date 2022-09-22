#sieve algorithm



#include<bits/stdc++.h>
using namespace std;
void sieve(int n)
{
   bool primes[n+2];
   memset(primes,true,sizeof(primes));
   for(int i=3;i*i<=n;i+=2)
   {

       if(primes[i]==true)
       {

           for(int j=i*i;j<=n;j+=i)
           {
               primes[j]=false;
           }
       }
   }
   // print
   cout<<"2"<<" ";
   for(int i=3;i<=n;i+=2)
   {

       if(primes[i]==true)
       {
           cout<<i<<" ";
       }
   }
}

int main()
{

    int n;
    cin>>n;
    sieve(n);

}
