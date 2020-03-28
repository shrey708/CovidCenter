#include <iostream>
using namespace std;

int fact(int n) {int count;
   if (n == 0 || n == 1)
      return 1;
   else{
     
   
return n * fact(n - 1);
   count ++;}
}
int count;
double prob;
int main() {
   int n, r, comb, per; 
   cout<<"Enter the number of family members : ";
   cin>>n;
   cout<<"\nEnter the number of members having infection : ";
   cin>>r;
   comb = fact(n) / (fact(r) * fact(n-r));
   cout << "\nCombination : " << comb; 
   per = fact(n) / fact(n-r);
   cout << "\nPermutation : " << per;
   cout <<"\n The numbers of persons that can be infected :";
   cout <<count;
   prob = (6*count)/100;
   cout<<" \n The probability of you having a infection :"<<prob;
   return 0;
}
