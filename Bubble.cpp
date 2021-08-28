#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n ;

    int ar[n];
    for(int i=0; i<n; i++){
        cin>>ar[i];
    
    }
    int counter=0;
    while(counter<n-1){
        for(int i=0;i<n-counter-1;i++){
            if(ar[i]>ar[i+1]){
                int temp=ar[i];
                ar[i]=ar[i+1];
                ar[i+1]=temp;
            }
        }
        counter++;

    }
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
     }cout<<endl;

 
}