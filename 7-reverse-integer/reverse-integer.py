class Solution:
    def rev(self, x: int) -> int:
        count = 0
        z = x
        
        # Counting the number of digits in x
        while z > 0:
            z = z // 10
            count += 1
        
        y = 0
        i = 10 ** (count - 1)
        
        # Reversing the number
        while x > 0:
            temp = x % 10
            y = y + (temp * i)
            x = x // 10
            i = i // 10
            
        return y

    def reverse(self, x: int) -> int:
        INT_MIN, INT_MAX = -2**31, 2**31 - 1
        if x == 0:
            return 0
        
        if x < 0:
            x = abs(x)
            x = self.rev(x)
            x = -x  # Convert it back to negative
            #return x
        else:
            x = self.rev(x)
            #return x

        if x < INT_MIN or x > INT_MAX:
            return 0
        else:
            return x