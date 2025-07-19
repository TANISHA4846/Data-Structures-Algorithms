#include <bits/stdc++.h>
using namespace std;

//KEY IDEA: Push the max element to last by adjacent swaps
//TIME COMPLEXITY: O(N) in best case & O(N^2) for best/Average cases

//Code implementation
vector<int> bubble_sort(vector<int> arr) {
    int n = arr.size();
    for (int i = n - 1; i >= 0; i--) {
        int didSwap = 0;
        for (int j = 0; j <= i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                didSwap = 1;
            }
        }
        //BEST CASE
        if(didSwap==0){
            break;
        }
    }
    return arr;
}

//Code execution
int main(){
    vector<int> nums;
    int n;
    cout<<"Enter number of values to be entered: "<<endl;
    cin>>n;
    //Taking input
    for(int i=0;i<n;i++){
        int val;
        cout<<"Enter the value: "<<endl;
        cin>>val;
        nums.push_back(val);
    }
    vector<int> res = bubble_sort(nums);

    // Print the sorted array
    cout<<"Sorted aaray after bubble sort"<<endl;
    cout << "Sorted array: ";
    for (int i=0;i<res.size();i++) {
        cout << res[i] << " ";
    }
     cout<<"THANKYOU"<<endl;
    return 0;
}