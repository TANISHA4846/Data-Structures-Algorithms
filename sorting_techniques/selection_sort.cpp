#include <bits/stdc++.h>
using namespace std;
// KEY IDEA - Select the min, insert it at arr[0] by swapping and so on...
//TIME COMPLEXITY: O(N^2) for best/Worst/Average cases

//FUNCTION IMPLEMENTATION
vector<int> selection_sort(vector<int> arr){
    int n = arr.size();
    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i;j<n-1;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        //swap with the min value that is ahead
        int temp = arr[min];
        arr[min] = arr[j];
        arr[j] = temp;
        }
    }
    return arr;
}

//EXECTUTION
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
    vector<int> res = selection_sort(nums);

    // Print the sorted array
    cout<<"Sorted aaray after selection sort"<<endl;
    cout << "Sorted array: ";
    for (int i=0;i<res.size();i++) {
        cout << res[i] << " ";
    }
     cout<<"THANKYOU"<<endl;
    return 0;

}