#include <string.h>
#include <stdbool.h>
//solution 01
// int lengthOfLongestSubstring(char* s) {
//     int ans = 0,left = 0;
//     bool has[128] = {}; //initializer syntax indicating that all the element in array is false
//     //array like this is usually used for fast lookups to check a character(usually ASCII if the array size is 128) has been encountered in a given context
//     int i = strlen(s);
//     for(int right = 0;right < i;right++){
//         char c = s[right];
//         while(has[c]){//a character has been encountered
//             has[s[left++]] = false;//set the element to false
//         }
//         has[c] = true;//add c to the array
//         int len = right - left + 1;
//         ans = len>ans?len:ans;
//     }
//     return ans;
// }

//solution02(faster)
int lengthOfLongestSubstring(char* s) {
    int i = 0,count = 0,max = 0,start = 0,index[128] = {0};
    for(i = 0;s[i]!='\0';i++){
        if(index[s[i]]>start){
            count = i-start;
            if(count > max){
                max = count;
            }
            start = index[s[i]];
        }
        index[s[i]] = i+1; 
    }
    count = i - start;
    return max>count?max:count;
}