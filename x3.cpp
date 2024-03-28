#include <iostream>
using namespace std;
int main()
{
int n;
double price;
int quantdy;
double totalprice;
double totalexpense;

cin >> n;

for(int i = 1; i <= n; i++)
{
    cin >> price >> quantdy;
    totalprice =  totalexpense + (price * quantdy);
}
cout << totalexpense;

if(totalexpense >= 5000)
{
  
  totalexpense= totalexpense - (totalexpense * 0.15);
  cout << totalexpense ;
}
else
{
  cout << totalexpense; 
}
    return 0;
}