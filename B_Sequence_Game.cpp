#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t > 0){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }
        
        
        vector<int> result;
        result.push_back(arr[0]);
        for(int i = 1; i < n; i++){
            if(arr[i - 1] <= arr[i]){
                result.push_back(arr[i]);
            }
            else{
                result.push_back(1);
                result.push_back(arr[i]);
            }
        }
        
        cout<<result.size()<<endl;
        for(int i = 0; i < result.size(); i++){
            cout<<result[i]<<" ";
        }
        cout<<endl;
        t--;
    }
    
    return 0;
}