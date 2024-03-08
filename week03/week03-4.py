class Solution:
    def maxFrequencyElements(self, nums: List[int]) -> int:
        T =[0]*101 #統計數字出現次數, 因數字 1...100, 陣列要開 101 個
        best = 0
        for num in nums:#迴圈,針對每個數字做處理
            T[num] += 1
            if T[num] >best:best =T[num]
        #到這裡, T就有全部的數字出現的字數了,且best就是最多的數字
        #把全部最多的都加起來
        total =0
        for t in T:
            if t==best: total +=t
        return total