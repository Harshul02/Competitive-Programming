#include<bits/stdc++.h>
using namespace std;

vector<int> findClosestElements(vector<int> arr, int k, int x) {
        vector<pair<int,int>> v;
        vector<int> vec;
        for(int i=0; i<arr.size(); i++)
        {
            v.push_back({abs(arr[i]-x),arr[i]});
        }
        sort(v.begin(), v.end());
        for(int i=0; i<k; i++)
        {
            vec.push_back(v[i].second);
        }
        sort(vec.begin(), vec.end());
        return vec;
}