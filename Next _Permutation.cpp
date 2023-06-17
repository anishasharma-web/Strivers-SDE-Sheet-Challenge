//https://www.codingninjas.com/codestudio/problems/next-permutaion_893046?topList=striver-sde-sheet-problems&leftPanelTab=1

#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &p, int n)
{

    // Step 1: Find the break point:
    int ind = -1;
    for (int i = n - 2; i >= 0; i--) {
        if (p[i] < p[i + 1]) {
            ind = i;
            break;
        }
    }
    // If break point does not exist:
    if (ind == -1) {
        // reverse the whole array:
        reverse(p.begin(), p.end());
        return p;
    }

    // Step 2: Find the next greater element and swap with arr[ind]:
    for (int i = n - 1; i > ind; i--) {
        if (p[i] > p[ind]) {
            swap(p[i], p[ind]);
            break;
        }
    }

    // Step 3: reverse the right half:
    reverse(p.begin() + ind + 1, p.end());
    return p;
}
