//
//  Test10.cpp
//  MyAlgorithm
//
//  Created by ThePixel on 2020/8/5.
//  Copyright © 2020 Charles. All rights reserved.
//

#include "Test10.hpp"

class Solution {
    
    
public:
    string palindrome(string& s, int l, int r){
        while (l >= 0 && r < s.size() && s[l] == s[r]) {
            //向两边展开
            l--;
            r++;
        }
        return s.substr(l+1, r-l-1);
    }
    
    string longestPalindrome(string s){
        string 
    }
};
