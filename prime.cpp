#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    bool isprime=1;

    for(int i=2;i<n;i++){
        if(n%i==0){
            // cout<<n<<" is not prime";
            isprime=0;
            break;
        }
        
    }
    if(isprime==0){
        cout << n << " is not prime"<<endl;
    }
    else{
        cout << n << " is prime"<<endl;
    }

}