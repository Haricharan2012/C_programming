int lengthOfLongestSubstring(char *s)
{
    int visited[128] = {0};          // Keeps track of whether a character is currently inside the window (0 = not present, 1 = present)

    int left = 0;                    // Left boundary of the sliding window
    int maxLen = 0;                  // Stores the maximum substring length found

    // Move the right pointer through the string
    for (int right = 0; s[right] != '\0'; right++)
    {
        // If current character already exists in the window,
        // shrink the window from the left until it is removed
        while (visited[s[right]])
        {
            visited[s[left]] = 0;    // Remove leftmost character from the window
            left++;                  // Move left boundary one step to the right
        }

        // Add the current character to the window
        visited[s[right]] = 1;

        // Calculate current window length
        int len = right - left + 1;

        // Update maximum length if current window is larger
        if (len > maxLen)
        {
            maxLen = len;
        }
    }

    // Return the length of the longest substring without repeating characters
    return maxLen;
}
