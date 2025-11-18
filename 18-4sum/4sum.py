from typing import List

class Solution:
    def fourSum(self, nums: List[int], target: int) -> List[List[int]]:
        n = len(nums)
        if n < 4:
            return []

        nums.sort()
        res: List[List[int]] = []

        for i in range(n - 3):
            # skip duplicate for i
            if i > 0 and nums[i] == nums[i - 1]:
                continue

            for j in range(i + 1, n - 2):
                # skip duplicate for j
                if j > i + 1 and nums[j] == nums[j - 1]:
                    continue

                b, c = j + 1, n - 1
                ut = target - nums[i] - nums[j]

                while b < c:
                    s = nums[b] + nums[c]
                    if s < ut:
                        b += 1
                    elif s > ut:
                        c -= 1
                    else:
                        res.append([nums[i], nums[j], nums[b], nums[c]])
                        b += 1
                        c -= 1
                        # skip duplicates for b and c
                        while b < c and nums[b] == nums[b - 1]:
                            b += 1
                        while b < c and nums[c] == nums[c + 1]:
                            c -= 1

        return res
