#include<stdio.h>
#include<stdlib.h>
#include "uthash.h"
//solution 01
// int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
//     int i = 0;
//     for(i = 0;i<numsSize;i++){
//         int j = 0+i;
//         for(j = i + 1;j<numsSize;j++){
//             if(*(nums+i)+*(nums+j) == target){
//                 int * ret = malloc(sizeof(int) * 2);
//                 ret[0] = i;
//                 ret[1] = j;
//                 *returnSize = 2;
//                 return ret;
//             }
//         }

//     }
//     *returnSize = 0;
//     return NULL;
//     /*returnSize: return the size of the array
//       function: malloc
//       request the allocation of the specified size bytes of spave from the system
//       e.g. void * malloc(int size)

//     */

// }

//{1,2,3}<-key
// 0,1,2 <-val
struct hashTable{
    int key;
    int val;
    UT_hash_handle hh;//make this structure a hashtable
};

struct hashTable * hashtable;

struct hashTable * find(int ikey){//define a function
    struct hashTable * tmp;//to store the address of found item
    HASH_FIND_INT(hashtable,&ikey,tmp);//find ikey in hashtable
    return tmp;//return NULL if no item is found
}

void insert(int ikey,int ival){
    struct hashTable * it = find(ikey);
    if(it == NULL){
        struct hashTable * tmp = malloc(sizeof(struct hashTable));//allocate space to store ikey and ival
        tmp->key = ikey;
        tmp->val = ival;
        HASH_ADD_INT(hashtable,key,tmp);//add tmp into hashtable
    }
    else{
        it->val = ival;//update ival
    }
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    hashtable = NULL;
    int i = 0;
    for(i = 0;i<numsSize;i++){
        struct hashTable * it = find(target-nums[i]);
        if(it != NULL){
            int * ret = malloc(2 * sizeof(struct hashTable));
            ret[0] = it->val;
            ret[1] = i;
            *returnSize = 2;
            return ret;
        }
        insert(nums[i],i);
    }
    *returnSize = 0;
    return NULL;
}