class Solution:
    def sortArrayByParityII(self, A: List[int]) -> List[int]:
        result = [0] * len(A)
        evenI = 0
        oddI = 1
        
        for i in range(len(A)):
            if A[i] % 2 ==0:
                result[evenI] = A[i]
                evenI += 2
            else:
                result[oddI] = A[i]
                oddI += 2
        
        return result
