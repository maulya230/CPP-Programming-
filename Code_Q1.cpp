#include<conio.h>
#include<iostream>
#include<math.h>
using namespace std;

int isPerfectSquare(int number){
   int iVar;
   float fVar;
   fVar=sqrt((double)number);
   iVar=fVar;
   if(iVar==fVar)
      return number;
   else
   return 0;
}
int main(){
   int n;
   cout<<"enter no: of elements:";
   cin>>n;
   int arr[n];
   int i;
   cout<<"enter the elements in an array:" <<endl;
   for(i = 0; i < n; i++){
       cin>>arr[i];
   }
   int sum = 0;
   for(i = 0; i < n; i++){
      sum = sum + isPerfectSquare(arr[i]);
   }
    cout<<"Sum= "<<sum;
   
   return 0;
}
