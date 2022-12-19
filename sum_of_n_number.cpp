#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter value of n "<<endl;

    cin >> n;
    cout<<"enter sum of "<<n<<endl;

    int sum=0;
    for(int i=1;i<=n;i++){
        sum +=i;
    }
cout<< sum;
}
