#include<bits/stdc++.h>

using namespace std;

// Time Complexity - O(n)
// Space Complexity - O(1)

int firstUniqChar(string s){

        int ans=-1;
        int len= s.length();
        int count[26]={0};
        
        for(char ch: s){
          count[ch -'a'] +=1;
        }
        
        for(int i=0; i<len ;i++){
            if(count[s[i] - 'a'] == 1){
                ans=i;
                break;
            }
        }
        
        return ans;

}

int main(){

     string str;
     cin>>str;
    
    int ans = firstUniqChar(str);
    
    cout<<ans<<endl;

    return 0;
}