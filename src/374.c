// Forward declaration of guess API.

// @param num, your guess

// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0

int guess(int num);



class Solution {

public:

    int guessNumber(int n) {

        int min = 1;

        int max = n;

            while(min <= max){

                int mid = min + ((max - min)/2);

                int ans = guess(mid);

                if(ans == 0)        return mid;

                else if(ans == 1)   min = mid + 1;

                else                max = mid -1;

            }

            return min;

        }

};
