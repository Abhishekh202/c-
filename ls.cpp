#include <iostream>
using namespace std;

bool search(int num[], int n, int key)
{
    for(int i=0;i<=n;i++){
        if(num[i]==key){
            return 1;
        }
    }
    return 0;
}

int main()
{
    int num[]={1,13,14,12,15,17,12,23,34,31};
    int size;
    
    cout<<"enter the key "<<endl;
    int key;
    cin>>key;

    bool found = search(num, 10, key);
    if(found){
        cout<<key<<" is present"<<endl;
    }
    else{
        cout<<key<<" is not present"<<endl;
    }
    return 0;

}