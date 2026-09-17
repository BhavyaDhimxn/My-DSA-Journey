class Solution {
public:

    /*
    OPTIMAL APPROACH:
    */
    int myAtoi(string s) {
        //Initialise a global pointer:
        //We need multiple loops running for different conditions with same pointer.
        int i = 0;

        //Loop -> Runs till a non-space char is found.
        while(s[i] == ' ') i++;

        //Initialise a variable that stores sign.
        long sign = 1;

        //Loop ends -> i -> 1st non-space char.
        //Check if it is a sign -> if it is a '-' sign value becomes negative.
        if(s[i] == '+' || s[i] == '-') {
            if(s[i] == '-') sign = -1;
            i++;
        }
        
        //Initialise an int var that stores the final number.
        long result = 0;

        //After the above check, we either encounter a digit or non-digit.
        //Loop -> Runs till we get a non-digit char.
        while(s[i] >= '0' && s[i] <= '9') {
            //Update the result by adding it using unit place method.
            result = (result * 10) + (s[i] - '0');
            //Check for overflow by using multiplying the result with sign to determin which end.
            if((result * sign) > INT_MAX) return INT_MAX;
            if((result * sign) < INT_MIN) return INT_MIN;
            //Increment i;
            i++;
        }
        //Return the result with its sign;
        return (result * sign);
    }
};
