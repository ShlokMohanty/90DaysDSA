#include<iostream>
using namespace std;
int sieve[100005];
const int N=100000;
void generatesieve()
{
 for(int i=1;i<=N;i++)
 {
  sieve[i]=1;
 }
  sieve[0]=sieve[1]=0;
} 
for(int i=2;i*i<=N;i++)
{
  if(sieve[i]==1)
  {
    for(int j=i*i;j<=N;j+=i)
    {
      sieve[j]=0;
    }
  }
}
bool checkPrime()
{
  
  generatesieve();
  if(sieve[j]==1)
  {
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      if(sieve[n]==1)
      {
        return true;
      }
      else 
      {
        return false;
      }
    }
  }
}
int main ()
{
 checkPrime();
}
