#include<bits/stdc++.h>
using namespace std;

int firstUniqChar(string s) {
        map<char,int> val;
        for(int i=0; i<s.length(); i++)
        {
            val[s[i]]++;
        }
        int i=0;
        for(i=0; i<s.length(); i++)
        {
            if(val[s[i]]==1)
                return i;    
        }
        return -1;
}