class Solution(object):
    def minDominoRotations(self, A, B):
        """
        :type A: List[int]
        :type B: List[int]
        :rtype: int
        """
        if len(A) != len(B):
            return -1
        if len(A) == 0:
            return 0
        for possibility in set([A[0], B[0]]):
            top_rotation, bottom_rotation =0, 0
            for a_num, b_num in zip(A, B):
                if possibility not in [a_num, b_num]:
                    break
                top_rotation += int(b_num != possibility)
                bottom_rotation += int(a_num != possibility)
            else:
                return min(top_rotation, bottom_rotation)
        return -1