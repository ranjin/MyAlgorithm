//
//  344-反转字符串.cpp
//  MyAlgorithm
//
//  Created by ThePixel on 2020/8/13.
//  Copyright © 2020 Charles. All rights reserved.
//

#include "344-反转字符串.hpp"

class Solution {
public:
    void reverseString(vector<char>& s){
        int i = 0;
        int j = (int)s.size()-1;
        while (i < j) {
            int temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++;
            j--;
        }
    }
};
