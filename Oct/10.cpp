#include <iostream>
#include <vector>
using namespace std;

// Array
class solution1{
    public:
    void printSpiral(vector<vector<int>> &arr){
        int n=arr.size(),m=arr[0].size(),s=0;
        for(int i=0;i<m;i++){
            int e =arr[0][i];
            cout<<e<<" ";
            s+=e;
        }
        for(int i=1;i<n;i++){
            int e =arr[i][m-1];
            cout<<e<<" ";
            s+=e;
        }
        for(int i=m-2;i>=0;i--){
            int e =arr[n-1][i];
            cout<<e<<" ";
            s+=e;
        }
        for(int i=n-2;i>=1;i--){
            int e =arr[i][0];
            cout<<e<<" ";
            s+=e;
        }
        cout<<endl<<s;
    }

};

int main()
{
    solution1 s = solution1();
    vector<vector<int>> arr = {{1,2,3,4,5,6},{7,8,9,10,11,12},{13,14,15,16,17,18}};
    s.printSpiral(arr);
    return 0;
}