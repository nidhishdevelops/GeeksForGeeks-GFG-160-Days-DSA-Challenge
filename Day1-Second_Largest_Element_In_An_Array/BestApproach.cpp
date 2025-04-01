//Finding the largest and second largest in a single pass
#include<iostream>
#include<vector>

using namespace std;

int SecondLargest(vector<int> &arr){
    int n = arr.size();
    int largest=-1,secondlargest=-1;

    for(int i=0; i<n;i++){
        if(arr[i]>largest){
            secondlargest=largest;
            largest=arr[i];
        }
        else if(arr[i] > secondlargest && arr[i]<largest){
            secondlargest=arr[i];
        }
    }

    return secondlargest;
}

int main(){
    vector<int> arr = {12,4,5,12,4};
    cout<<SecondLargest(arr);
    return 0;
}