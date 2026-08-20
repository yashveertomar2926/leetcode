bool predictTheWinner(int* nums, int numsSize) {
    int* dp = malloc(numsSize * sizeof(int));

    for (int left = numsSize - 1; left >= 0; left--) {
        dp[left] = nums[left];

        for (int right = left + 1; right < numsSize; right++) {
            int takeLeft = nums[left] - dp[right];
            int takeRight = nums[right] - dp[right - 1];
            dp[right] = takeLeft > takeRight ? takeLeft : takeRight;
        }
    }

    bool result = dp[numsSize - 1] >= 0;

    free(dp);
    return result;
}