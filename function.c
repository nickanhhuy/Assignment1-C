//Q1
double base_power(double base, int power, double result) {
    //Case: The result always is 1 when the power is 0
    if (power == 0) {
        return result;
    }
    // Case: If the power is greater than 0 then it repeatedly implements the function until the result shows when the power reaches 0.
    // For ex: if the power is 2 and base is 2, the power is 2 and (result * base) will be 1 * 2 = 2.
    //         Again it repeats the function: Now the power is 1 and (result * base) is 2 * 2 = 4.
    //         Then it will show the result when the power reaches 0.
    else if (power > 0) {
        return base_power(base, power - 1, result * base);
    }
    //Case: If the power is less than 0 then it repeatedly implements the function until the result shows when the power reaches 0.
    // In this case for handling negative numbers, power should be +1 and result is result/base
    else {
        return base_power(base, power + 1, result * base);
    }
    return 0;
}
