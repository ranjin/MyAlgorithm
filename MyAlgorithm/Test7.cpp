//
//  Test7.cpp
//  MyAlgorithm
//
//  Created by ThePixel on 2020/7/27.
//  Copyright © 2020 Charles. All rights reserved.
//

#include "Test7.hpp"
class CQueue{
public:
    string palindrome(string& s, int l, int r){
        //防止越界
        while (l >= 0 && r < s.size() && s[l] == s[r]) {
            //向两边展开
            l--;
            r++;
        }
        return s.substr(l+1, r-l-1);
    }
    
    string longestPalindrome(string s){
        string res;
        for (int i = 0 ; i < s.size(); i++) {
            //以s[i]为中心的最长回文子串
            string s1 = palindrome(s, i, i);
            
            //以s[i]和s[i+1]为中心的最长回文子串
            string s2 = palindrome(s, i, i+1);
            
            //res = longest(res, s1, s2)
            res = res.size() > s1.size() ? res : s1;
            res = res.size() > s2.size() ? res : s2;
        }
        return res;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    string palindrome(string& s, int l, int r){
        //防止索引越界
        while (l >= 0 && r < s.size() && s[l] == s[r]) {
            //向两边展开
            l--;
            r++;
        }
        //返回以s[l]和s[r]为中心的最长回文串
        return s.substr(l+1, r-l-1);
    }
    
    string longestPalindrome(string s){
        string res;
        for (int i = 0 ; i < s.size(); i++) {
            //以s[i]为中心的最长回文子串
            string s1 = palindrome(s, i, i);
            
            //以s[i]和s[i+1]为中心的最长回文子串
            string s2 = palindrome(s, i, i+1);
            
            res = res.size() > s1.size() ? res : s1;
            res = res.size() > s2.size() ? res : s2;
        }
        return res;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
};
