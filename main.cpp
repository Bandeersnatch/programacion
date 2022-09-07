#include <iostream>
using namespace std;

int fac (int num)
{
  if (num == 0)
  {
    return 1;
  }
  else
  {
    return fac (num-1)*num;
  }
}

int per (int n, int m)
{
  return fac (n)/fac(n-m);
}

int comb (int n, int m)
{
  return fac (n)/(fac(n-m)*fac(m));
}

void perycomb()
{
  int n, m;
  
  cout<<"Digite 2 numeros para calcular la permutacion y la combiantoria: ";
  cin>>n;
  cin>>m;

  cout<<"La permutacion de "<<n<<" y de "<<m<<" es: "<<per(n, m)<<endl;

  cout<<"La combinatoria de "<<n<<" y de "<<m<<" es: "<<comb(n, m)<<endl;
  
}

int main() 
{
  perycomb();
}



/////
