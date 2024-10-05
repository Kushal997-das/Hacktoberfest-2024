#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

bool isIsomorphic(string s, string t) {
    if (s.length() != t.length()) {
        return false; 
    }
    
    unordered_map<char, char> mapST; 
    unordered_set<char> mappedValues; 

    for (int i = 0; i < s.length(); i++) {
        char sc = s[i]; 
        char tc = t[i]; 
        
        if (mapST.find(sc) != mapST.end()) {
            if (mapST[sc] != tc) {
                return false; 
            }
        } else {
            if (mappedValues.find(tc) != mappedValues.end()) {
                return false; 
            }
            mapST[sc] = tc;
            mappedValues.insert(tc);
        }
    }
    
    return true;
}

int main() {
    string s,t;
    
    cout<<"Enter the first string:";
    cin>>s;
    cout<<"Enter the second string:";
    cin>>t;

    cout << (isIsomorphic(s, t) ? "True" : "False") << endl;

    return 0;
}
