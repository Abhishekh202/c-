#include<iostream>
using namespace std;

int main(){
   int n;
   cout<<"Enter the amount "<<endl;
   cin>>n;
   int Rs100,Rs50,Rs20,Rs10;
   switch(1){
    case 1: Rs100=n/100;
            n=n%100;
            cout<<"Number of Rs100 notes "<<Rs100<<endl;
    
    case 2: Rs50=n/50;
            n=n%50;
            cout<<"Number of Rs50 notes "<<Rs50<<endl;
    
    case 3: Rs20=n/20;
            n=n%20;
            cout<<"Number of Rs20 notes "<<Rs20<<endl;

    case 4: Rs10=n/10;
            n=n%10;
            cout<<"Number of Rs10 notes "<<Rs10<<endl;

   } 
}