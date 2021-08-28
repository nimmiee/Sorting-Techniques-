#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int ar[n];
    for(int i=0;i<n;i<i++){
        cin>>ar[i];
    }
    for(int i=1;i<n;i++){
        int current = ar[i];
        int j=i-1;
        while(ar[j]>current && j>=0){
        ar[j+1]=ar[j];
        j--;
        }
        ar[j+1]=current;
    }
     for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
     }cout<<endl;
    
}