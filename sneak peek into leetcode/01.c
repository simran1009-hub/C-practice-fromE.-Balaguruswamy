/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.



Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]


Constraints:

2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109
Only one valid answer exists.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n_num;
    int *ptr;
    int target;
    printf("Enter the size of the integer array\n");
    scanf("%d", &n_num);
    printf("Enter target\n");
    scanf("%d", &target);
    ptr = (int *)malloc(n_num * sizeof(int));
    printf("Enter the array of integers\n");
    for (int i = 0; i < n_num; i++)
    {
        printf("Enter ptr[%d]\n", i);
        scanf("%d", &ptr[i]);
    }
    int count=0;
    for (int i = 0; i < n_num; i++)
    {
        for (int j = n_num - 1; j >= 0; j--)
        {

            if (ptr[i] + ptr[j] == target && i != j)
            {
                printf("[%d,%d]\n", i, j);
                count++;
                break;
            }
        }
        if (count != 0)
        {
            break;
        }
    }
    free(ptr);
    return 0;
}