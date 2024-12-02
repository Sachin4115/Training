#include <iostream>
#include <vector>
using namespace std;

// count char without spaces

int countChar(string str){
    int s=0,e=0;
    while(e<str.length()){
        if(str[e]!=' '){
            str[s]=str[e];
            s++;
        }
        e++;
    }
    return s;
}

// Swap 0s by 1s
int swap0by1(vector<int> a){
    int k=0;
    for(int i=0; i<a.size();i++){
        if(a[i])
            k++;
    }
    int s=0,c=0,ans=k;
    for(int i=0;i<a.size();i++){
        if(!a[i])
            c++;
        if(i>=k){
            ans=min(ans,c);
            if(!a[s++])
                c--;
        }
    }
    return ans;
}


int main()
{
    string str = "It  is   Hot     Outside";
    cout<<countChar(str)<<endl;
    vector<int>a = {0,0,1,0,0,1,0,1,1,0,0};
    cout<<swap0by1(a)<<endl;
    return 0;
}