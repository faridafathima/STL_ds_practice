/*longest substring between 2 string
 * suppose two string are given s1="hello"; and s2="hell"
 * output should be: res="hell";
*/

//do using dynamic programming
//Understood the logic from https://www.youtube.com/watch?v=BysNXJHzCEs
//and https://iq.opengenus.org/longest-common-substring/

#include<iostream>
#include<map>
using namespace std;

string longestSubStringBwTwoString(string s1,string s2){
    const int size1=s1.size();
    const int size2=s2.size();
    int mat[size1+1][size2+1];

    int res=0,end=0;
    int cur=0;
    for(int i=0;i<=size1;i++){
        for(int j=0;j<=size2;j++){
            if(i==0||j==0){
                mat[cur][j]=0;
            }else if(s1[i-1]==s2[j-1]){
                mat[cur][j]=mat[1-cur][j-1]+1;
                if(res<mat[cur][j]){
                    res=mat[cur][j];
                    end=i-1;
                }
            }else{
                mat[cur][j]=0;
            }
        }
        cur=1-cur;
    }
    if(res==0)return "";
    string ans;
    return s1.substr(end-res+1,res);
}

int main() {
    string s1="hello";
    string s2="hell";
    cout<<"longest SubString between two string is:"<<longestSubStringBwTwoString(s1,s2)<<endl;
    return 0;
}