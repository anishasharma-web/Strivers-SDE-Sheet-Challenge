#include <bits/stdc++.h>

long long int nCr(long long int n,long long int r) {
    long long res = 1;

// calculating nCr:
    for (int i = 0; i < r; i++) {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return (long long int)(res);
}
vector<vector<long long int>> printPascal(int n) 
{
    vector<vector<long long int>> ans;
    //Store Pascal's triangle:
    for (int row = 1; row <= n; row++) {
        vector<long long int> tempLst; // temporary list
        for (int col = 1; col <= row; col++) {
            tempLst.push_back(nCr(row - 1, col - 1));
        }
        ans.push_back(tempLst);
    }
    return ans;
}
