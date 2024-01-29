#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

bool isIsomorphic(string &str1, string &str2)
{
    int arr1[128]={-1};
    int arr2[128]={-1};
    

    if(str1.size() != str2.size()){
        return false;
    }

    for(int i=0;i<str1.size();i++){
        if(arr1[str1[i]] != arr2[str2[i]]){
            return false;
        }
        arr1[str1[i]] = arr2[str2[i]] = i;
    }
    return true;
}

int main(){
    string str1,str2;
    cin>>str1>>str2;
    if(isIsomorphic(str1,str2)){
        cout<<"they are isomorphic"<<endl;
    }
    else{
        cout<<"they are not isomorphic"<<endl;
    }

    return 0;
}