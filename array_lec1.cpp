#include <iostream>
using namespace std;

int main()
{
    // initiating an array manually  
    int nums[4] = {1,2,3,4};
    cout<<nums[0]<<endl;
    cout<<nums[3]<<endl;
    // initiating an array from user input
    int n;
    cin>>n;
    int nums1[n];
    for(int i=0;i<n;i++){
        cin>>nums1[i];
    }
    for(int i=0;i<n;i++){
        cout<<nums1[i]<<" ";
    }
    cout<<endl;
    // to findout min and max number in the array
    int min_num=0,max_num=0;//or we can use INT_MIN,INT_MAX instead of 0 and we have to include library called climits and #include<climits>
    for(int i=0;i<n;i++){
        if(nums1[i]<min_num){
            min_num = nums1[i]; // instead of if statement we can write it as max_num = max(max_num,nums[i]); and same can be done with min 
        }
        if(nums1[i]>max_num){
            max_num = nums1[i];
        }
    }
    cout<<"min: "<<min_num<<endl;
    cout<<"max: "<<max_num<<endl;
    

    return 0;
}
