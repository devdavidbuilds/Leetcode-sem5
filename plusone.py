from typing import List

class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:

        # Traverse the list from the last digit to the first
        for i in range(len(digits) - 1, -1, -1):

            # If the current digit is less than 9,
            # simply add 1 and return the result.
            if digits[i] < 9:
                digits[i] += 1
                return digits

            # If the digit is 9, it becomes 0
            digits[i] = 0

        # If all digits were 9 (e.g., [9], [9,9]),
        # add 1 at the beginning.
        return [1] + digits
