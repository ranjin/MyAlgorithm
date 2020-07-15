//
//  88_合并两个有序数组.cpp
//  MyAlgorithm
//
//  Created by ThePixel on 2020/7/15.
//  Copyright © 2020 Charles. All rights reserved.
//

#include "88_合并两个有序数组.hpp"
class soulution{
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
        int i1 = m-1;
        int i2 = n-1;
        int cur = (int)nums1.size() - 1;
        
        while (i2 >= 0) {
            if (i1 >= 0 && nums2[i2] < nums1[i1]) {
                nums1[cur] = nums1[i1];
                cur--;
                i1--;
            }else{
                //i1 < 0 || nums2[i2] >= nums1[i1]
                nums1[cur] = nums2[i2];
                cur--;
                i2--;
            }
        }
    }
};
