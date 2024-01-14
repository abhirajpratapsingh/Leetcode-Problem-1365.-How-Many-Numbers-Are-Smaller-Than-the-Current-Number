# Abhiraj Pratap Singh

---

# UPVOTE IT....

---


# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->

- The problem seems to be asking for an array where each element represents the count of numbers smaller than the corresponding element in the input array.

---

![Screenshot (47).png](https://assets.leetcode.com/users/images/1c49b36f-74b8-44ec-884e-1beddaaf005a_1705253668.5769818.png)

---

# Approach
<!-- Describe your approach to solving the problem. -->

- The current approach uses two nested loops. For each element at index i in the input array, it iterates through the entire array again to count the numbers smaller than nums[i]. The count is then pushed into the result vector.
    1. Initialize an empty vector v to store the counts.
    2. Iterate through each element in the input array (nums).
        - For each element at index i, initialize a counter (count) to 0.
        - Iterate through the array again to compare nums[i] with each element.
        - If nums[i] is greater than the element at index j, increment count.
        - Push the final count into the result vector v.
    3. Return the result vector v.

---


# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- **Time complexity: O(n^2),** where n is the size of the input array.
    - The nested loops result in quadratic time complexity as it iterates through the entire array for each element.

---

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
- **Space complexity: O(n),** where n is the size of the input array.
    - The result vector v stores counts for each element in the input array.

---


# Code
```
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) 
    {
        int count;
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            count=0;
            int min=nums[i];
            for(int j=0;j<nums.size();j++)
            {
                if(nums[i]>nums[j])
                    count++;
            }
            v.push_back(count);
        }
        return v;
    }
};
```
---
# if you like the solution please UPVOTE it ......


---

![discord-discordgifemoji.gif](https://assets.leetcode.com/users/images/09030fa3-1206-468d-818d-13d32bf21434_1705253859.0645297.gif)

---


![fucking-die-redditor-stupid-cuck-funny-cat.gif](https://assets.leetcode.com/users/images/06e950cf-ce09-4404-a690-7b17e5a7aad1_1705253865.3247054.gif)


---
