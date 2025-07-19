#include <bits/stdc++.h>
using namespace std;
// KEY IDEA - Takes the element & places it in the correct order in the array by checking and swapping till it gets on its right place.
//TIME COMPLEXITY: O(N) in best case & O(N^2) for best/Average cases

//FUNCTION IMPLEMENTATION
vector<int> insertion_sort(vector<int> arr){
    int n = arr.size();
    for(int i=0;i<n;i++){
        int j = i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
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
    vector<int> res = insertion_sort(nums);

    // Print the sorted array
    cout<<"Sorted aaray after insertion sort"<<endl;
    cout << "Sorted array: ";
    for (int i=0;i<res.size();i++) {
        cout << res[i] << " ";
    }
     cout<<"THANKYOU"<<endl;
    return 0;

}