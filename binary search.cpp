// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void binarysearch(int *arr,int n,int k){
    int l=0,h=n-1;
    int pos=-1;
    while(l<=h){
        int mid=(l+h)/2;
        if(arr[mid]==k){
            pos=mid;
            cout<<"founded\n";
            break;
        }
        else if(arr[mid]>k){
            h=mid-1;
        }
        else l=mid+1;
    }
    if(pos==-1)
    cout<<"not founded";
}
int main() {
    // Write C++ code here
    int arr[]={1,2,5,67,89,456};
    binarysearch(arr,6,9);
    
    return 0;
}