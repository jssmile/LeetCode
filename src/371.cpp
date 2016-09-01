//Iterative Solution

class Solution {

public:

    int getSum(int a, int b) {

        int c = 0;

        while(true){

            if(b==0){

                return a;

            }

            else{

                c = a;

                a = a ^ b;

                b = (c & b) << 1;

            }

        }

    }

};
