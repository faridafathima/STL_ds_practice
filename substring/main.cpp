#include<iostream>
#include<vector>
#include<string>

using namespace std;

/**
 * S1= " Hello Razak and Farida and
 * s2 = "and"
 *  true
 * * @return
 */

int isSubStringCount(string mainstring, string sub) {
    if(mainstring.length()== sub.length()){
        if(mainstring==sub){ return 1;}
        return 0;
    }
    if (mainstring.substr(0, sub.length()) == sub){
        return 1 + isSubStringCount(mainstring.substr(sub.length(), mainstring.length()-sub.length()), sub);
    } else {
        return isSubStringCount(mainstring.substr(1, mainstring.length()-1), sub);
    }
}

int main() {
    string s1 = "and Hello Razak and Farida and Razak";
    string s2 = "and";
    cout << " result is:" << isSubStringCount(s1, s2) << endl;
}
