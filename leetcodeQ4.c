#include<stdlib.h>
//solution01
// int cmp(const void*a,const void*b){//const void* ->allows the function to accpt pointers to elements of all data type
//     //makes qsort function generic
//     return *(int*)a>*(int*)b?1:-1;
//     //(int *) -> making the comparison is made between two int values
//     //return 1 -> suggests b before a
//     //return -1 -> representing a before b
// }
// int ar[2001];
// double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
//     int k = 0;
//     for(int i = 0;i<nums1Size;i++){
//         ar[k++] = nums1[i];
//     }
//     for(int i = 0;i<nums2Size;i++){
//         ar[k++] = nums2[i];
//     }
//     qsort(ar,k,4,cmp);
//     //"quicksort"
//     //-A pointer to the beginning of the array
//     //-the number of elements in the array
//     //-the size of each element in the array
//     //-a comparison function that dictates the sort order;
//     if(k%2!=0){
//         return ar[k/2];
//     }
//     else{
//         for(int i=0,j=k-1;;i++,j--){
//             if(j-i==1){
//                 return (ar[i]+ar[j])/2.0;
//             }
//         }
//     }
// }

//solution02
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int mid = (nums1Size+nums2Size)/2;
    int nums1_i = 0,nums2_i=0;
    int choice_flag = 0;
    double return_num[2] = {0};
    
    while(nums1_i+nums2_i<=mid){
        if((nums1_i<nums1Size) && (nums2_i<nums2Size)){
            if(nums1[nums1_i]<nums2[nums2_i]){
                return_num[++choice_flag%2] = nums1[nums1_i++];
            }
            else{
                return_num[++choice_flag%2] = nums2[nums2_i++];
            }
        }
        else if(nums1_i<nums1Size){
                return_num[++choice_flag%2] = nums1[nums1_i++];
            }
        else{
                return_num[++choice_flag%2] = nums2[nums2_i++];
        }
    }

    if((nums1Size+nums2Size)%2){
        return return_num[choice_flag%2];
    }
    else{
        return (return_num[choice_flag%2] + return_num[++choice_flag%2])/2.0;
    }
}