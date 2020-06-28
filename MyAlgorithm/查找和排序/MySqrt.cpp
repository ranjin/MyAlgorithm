//
//  MySqrt.cpp
//  MyAlgorithm
//
//  Created by 冉金 on 2020/6/27.
//  Copyright © 2020 ThePixel. All rights reserved.
//

#include "MySqrt.hpp"
class MySqrt{
public:
    int mySqrt(int x){
        int l = 0;
        int r = x;
        int ans = -1;
        while (l <= r) {
            int mid = l + (r-l) / 2;
            if (mid*mid <= x) {
                ans = mid;
                l = mid+1;
            }else{
                r = mid-1;
            }
        }
        return ans;
    }
};
