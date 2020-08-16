//
//  Test8.cpp
//  MyAlgorithm
//
//  Created by ThePixel on 2020/7/28.
//  Copyright © 2020 Charles. All rights reserved.
//

#include "Test8.hpp"
class Solution{
    struct ListNode{
        int val;
        ListNode *next;
        ListNode(int x): val(x), next(NULL){}
    };
public:
    void coutSort(int data[], int length){
        if (data == nullptr || length <= 0) {
            return;
        }
        int max = data[0];
        for (int i = 1; i < length; i++) {
            if (data[i] > max) {
                max = data[i];
            }
        }
        
        int* coutData = new int[max+1];
        for (int i = 0 ; i<= max; i++) {
            coutData[i] = 0;
        }
        
        for (int i = 0; i < length; i++) {
            ++coutData[data[i]];
            
        }
    }
    
    
    
    void Qsort(int arr[], int low, int high){
        if (low >= high) {
            return;
        }
        int i = low;
        int j = high+1;
        int key = arr[low];
        while (true) {
            while (arr[i++] < key) {
                if (i == high) {
                    break;
                }
            }
            while (arr[--j] > key) {
                if (j == low) {
                    break;
                }
            }
            if (i >= j) {
                break;
            }
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        int temp = arr[j];
        arr[j] = arr[low];
        arr[low] = temp;
        Qsort(arr, low, j-1);
        Qsort(arr, j+1, high);
    }
    
    
    
    
void insertSort(int arr[], int length){
    for (int i = 1; i < length; i++) {
        for (int j = i-1; j >= 0 && arr[j+1] < arr[j]; j--) {
            swap(arr[j], arr[j+1]);
        }
    }
}
//递归方式构建大根堆(len是arr的长度, index是第一个非叶子节点的下下标)
void adjust(vector<int>& arr, int len, int index){
    int left = 2*index + 1;     //index的左子节点
    int right = 2*index + 2;    //index的右子节点
    int maxIdx = index;
    if (left < len && arr[left] > arr[maxIdx]) {
        maxIdx = left;
    }
    if (right < len && arr[right] > arr[maxIdx]) {
        maxIdx = right;
    }
    if (maxIdx != index) {
        swap(arr[maxIdx], arr[index]);
        adjust(arr, len, maxIdx);
    }
}

//堆排序
void headSort(vector<int> & arr, int size){
    //构建大根堆(从最后一个非叶子节点向上)
    for (int i = size/2-1; i >= 0; i--) {
        adjust(arr, size, i);
    }
    
    //调整大根堆
    for (int i = size-1; i >= 1; i--) {
        swap(arr[0], arr[i]);   //将当前最大的放置到数组末尾
        adjust(arr, i, 0);      //将未完成排序的部分继续进行堆排序。
    }
}
    void selectSort(vector<int>& nums, int len){
        int minIndex, temp;
        for (int i = 0; i < nums.size(); i++) {
            minIndex = i;
            for (int j = i+1; j < nums.size(); j++) {
                if (nums[j] < nums[minIndex]) {
                    minIndex = j;
                }
            }
            temp = nums[i];
            nums[i] = nums[minIndex];
            nums[minIndex] = temp;
        }
    }
    void BubbleSort(vector<int>& nums, int len){
        int i, j;
        bool sorted = true;
        for (i = 0; i < nums.size(); i++) {
            for (j = 0; j < nums.size()-i-1; j++) {
                if (nums[j] > nums[j+1]) {
                    int temp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1] = temp;
                    sorted = false;
                }
            }
        }
        if (sorted) {
            return;
        }
    }
    
//    void BubbleSort(vector<int>& nums, int len){
//        int i, j;
//        for (i = 0; i < nums.size(); i++) {
//            for (j = 0; j < nums.size()-i-1; j++) {
//                if (nums[j] < nums[j+1]) {
//                    int temp = nums[j];
//                    nums[j] = nums[j+1];
//                    nums[j+1] = temp;
//                }
//            }
//        }
//    }
//    void Qsort(int arr[], int low, int high){
//        if (low >= high) {
//            return;
//        }
//        int i = low;
//        int j = high+1;
//        int key = arr[low];
//        while (true) {
//            while (arr[++i] < key) {
//                if (i == high) {
//                    break;
//                }
//            }
//            while (arr[--j] > key) {
//                if (j == low) {
//                    break;
//                }
//            }
//            if (i >= j) {
//                break;
//            }
//            int temp = arr[i];
//            arr[i] = arr[j];
//            arr[j] = temp;
//        }
//        int temp = arr[low];
//        arr[low] = arr[j];
//        arr[j] = temp;
//        qsrot
//    }
    
//    ListNode *removeElements(ListNode *head, int val){
//        ListNode *newHead = new ListNode(0);
//        ListNode *newTail = newHead;
//        while (head != NULL) {
//            if (head->val != val) {
//                newTail->next = head;
//                newTail = head;
//            }
//            head = head->next;
//        }
//        newTail->next = NULL;
//        return newHead->next;
//    }
};
    
