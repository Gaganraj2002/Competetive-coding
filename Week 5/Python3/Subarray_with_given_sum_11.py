import collections


class Solution(object):
    def subarraySum(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        ans = sums = 0
        cnt = collections.Counter()
        for num in nums:
            cnt[sums] += 1
            sums += num
            ans += cnt[sums - k]
        return ans


x = Solution()
print(x.subarraySum([1, 2, 3, 7, 5], 12))
