#include <iostream>
#include <vector>

int findMax(std::vector<int>& nums) {
    int maxNum = nums[0];

    for (int num : nums) {
        if (num > maxNum) {
            maxNum = num;
        }
    }

    return maxNum;
}

int main() {
    std::vector<int> nums = {3, 7, 1, 9, 2};

    std::cout << "Maximum Number: " << findMax(nums) << std::endl;

    return 0;
}
