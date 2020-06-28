//
//  MergeSpace.cpp
//  MyAlgorithm
//
//  Created by ThePixel on 2020/6/16.
//  Copyright © 2020 ThePixel. All rights reserved.
//

#include "MergeSpace.hpp"

class MergeSpace{
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals){
        if (intervals.size() == 0) {
            return {};
        }
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> merged;
        for (int i = 0; i < intervals.size(); ++i) {
            int L = intervals[i][0];
            int R = intervals[i][1];
            //
            if (!merged.size() || merged.back()[1] < L) {
                merged.push_back({L, R});
            }else{
                merged.back()[1] = max(merged.back()[1], R);
            }
        }
        return merged;
    }
};
//public:
//    vector<vector<int>> merge(vector<vector<int>>& intervals){
//        if (intervals.size() == 0) {
//            return {};
//        }
//
//        //容器vector的排序
//        /**
//         .back:得到数组的最后一个单元的引用
//         .push_back: 在数组最后添加一个元素
//         sort: 排序，从小到大
//         */
//        sort(intervals.begin(), intervals.end());
//        vector<vector<int>> merged;
//        for (int i = 0; i < intervals.size(); i++) {
//            int L = intervals[i][0], R = intervals[i][1];
//            //后面左端点比前一个的右端点还大
//            if (!merged.size() || L > merged.back()[1]) {
//                merged.push_back({L, R});
//            }else{
//                //后面左端点比前一个的右端点小，替换前面的右端点
//                merged.back()[1] = max(merged.back()[1], R);
//            }
//        }
//        return merged;
//    }
//};
