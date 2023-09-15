// INFO: Headers from the standard library should be inserted at the top via
// #include <LIBRARY_NAME>
#include <cmath>

// daily_rate calculates the daily rate given an hourly rate
double daily_rate(double hourly_rate) {
    // Storing the daily rate factor is given
    int dailyRateFactor = 8;
    // Multiplying the daily rate by the factor 
    double totalDailyRate = hourly_rate * dailyRateFactor;
    // Returning the product of the multiplying
    return totalDailyRate;
}

// apply_discount calculates the price after a discount
double apply_discount(double before_discount, double discount) {
    // Converting the discount rate into a decimal form
    double discountRate = discount / 100;
    // Storing the rate of the value after subtracting the discount rate
    double newValueRate = 1 - discountRate;
    // Multiplying the original rate with the new percentage rate of the value
    double afterDiscount = before_discount * newValueRate;
    // Returning the new value after applyng the discount
    return afterDiscount;
}

// monthly_rate calculates the monthly rate, given an hourly rate and a discount
// The returned monthly rate is rounded up to the nearest integer.
int monthly_rate(double hourly_rate, double discount) {
    // Storing the number of billable days given
    int billableDays = 22;
    // Calculating the original monthly rate = dail rate * billable days
    double originalMonthlyRate = daily_rate(hourly_rate) * billableDays;
    // Calculating the rate value after applying the discount
    double rateAfterDiscount = apply_discount(originalMonthlyRate, discount);
    // Rounding up the discounted rate value and storing it as an integer
    int finalMonthlyRate = ceil(rateAfterDiscount);
    // Returning the discounted monthly rate
    return finalMonthlyRate;
}

// days_in_budget calculates the number of workdays given a budget, hourly rate,
// and discount The returned number of days is rounded down (take the floor) to
// the next integer.
int days_in_budget(int budget, double hourly_rate, double discount) {
    // Calculating the percentage value after subtracting the discount rate
    double afterDiscountRate = 1 - (discount / 100);
    // Calculating the daily total rate using the "daily_rate" function
    double dailyTotalRate = daily_rate(hourly_rate);
    // Calculating the number of billable days
    int numberOfDays = budget / (dailyTotalRate * afterDiscountRate);
    // Returning the number of billable days
    return numberOfDays;
}