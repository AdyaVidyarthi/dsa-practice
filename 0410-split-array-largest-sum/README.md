# 410. Split Array Largest Sum (Hard)

**Approach:** Binary search on the answer.
Search space is [max(nums), sum(nums)] — the minimum possible answer is at least the largest element, and at most the total sum.
For each candidate mid, greedily check the minimum number of subarrays needed so no subarray sum exceeds mid. If that count ≤ k, mid is feasible → try smaller (high = mid - 1); else go larger (low = mid + 1).

**Time Complexity:** O(n log(sum - max))
**Space Complexity:** O(1)
