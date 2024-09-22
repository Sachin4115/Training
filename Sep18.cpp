#include <iostream>
#include <vector>
using namespace std;

vector<int> merge(vector<int> &arr1,vector<int> &arr2){
    int i=0,j=0,k=0,n=arr1.size(),m=arr2.size();
    vector<int> ans(n+m);
    while(i<n && j<m){
        if(arr1[i]<arr2[j])
            ans[k++]=arr1[i++];
        else
            ans[k++]=arr2[j++];
    }
    while(i<n)
        ans[k++]=arr1[i++];
    while(j<m)
        ans[k++]=arr2[j++];
    return ans;
}

int MaxPlatform(vector<int> &arr1,vector<int> &arr2){
    int a=0;
    int c=0;
    int i=0,j=0,n=arr1.size(),m=arr2.size();
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            c++;
            i++;
            a=max(a,c);
        }
        else{
            j++;
            c--;
        }
    }
    return a;
}

int maxSum(vector<int> &arr, int k){
    int s=0,j=0;
    for(int i=0;i<k;i++){
        s+=arr[i];
    }
    int a=s;
    for(int i=k;i<arr.size();i++){
        s+=arr[i];
        s-=arr[j++];
        a=max(a,s);
    }
    return a;
}

int maxNeg(vector<int> &arr, int k){
    int s=0,j=0;
    for(int i=0;i<k;i++){
        if(arr[i]<0)
            s++;
    }
    int a=s;
    for(int i=k;i<arr.size();i++){
        if(arr[i]<0)
            s++;
        if(arr[j++]<0)
            s--;
        a=max(a,s);
    }
    return a;
}

int main()
{
    vector<int> arr1 = {900, 940, 950, 1100, 1500, 1800};
    vector<int> arr2 = {910, 1200, 1120, 1130, 1900, 2000};
    vector<int> ans = merge(arr1, arr2);
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    cout<<endl;
    int a = MaxPlatform(arr1, arr2);
    cout<<a<<endl;

    vector<int>arr = {5,3,1,2,8,4,-1,6};
    cout<<maxSum(arr,4)<<endl;
    vector<int>neg = {-2,1,3,-4,-6,7,8,-2,1};
    cout<<maxNeg(neg,4)<<endl;
    return 0;
}