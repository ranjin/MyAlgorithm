//
//  旋转数组的最小数字.cpp
//  MyAlgorithm
//
//  Created by 冉金 on 2020/6/27.
//  Copyright © 2020 ThePixel. All rights reserved.
//

#include "旋转数组的最小数字.hpp"
class Solution{
public:
    int minArray(vector<int>& numbers){
        int n = (int)numbers.size();
        int index = random
        if (!n) {
            return -1;
        }
        if (n == 1) {
            return numbers[0];
        }
        int l = 0;
        int r = n - 1;
        if (numbers[r] > numbers[l]) {  //未旋转
            return numbers[l];
        }
        while (l < r) {
            int mid = l + (r-l)/2;
            if (numbers[mid] > numbers[r]) {
                l = mid+1;
            }else{
                r = mid;
            }
        }
        return numbers[l];
    }
};
