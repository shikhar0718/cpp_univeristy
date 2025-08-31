#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array";
    cin>>n;

    int arr[n];

    cout<<"Start entering the elements of the array";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    int low =0;
    int high=n-1;
    int max_water=0;

    while(low<high){
        int water = min(arr[low ],arr[high])*(high-low);
        if (water>max_water){
            max_water = water;
        }
        
        if (arr[low]<arr[high]){
            low ++;
        }
        else{
            high--;
        }
        
    }
    return max_water;

}