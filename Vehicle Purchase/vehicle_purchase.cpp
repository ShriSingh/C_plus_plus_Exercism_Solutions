#include "vehicle_purchase.h"

namespace vehicle_purchase {

    // needs_license determines whether a license is needed to drive a type of vehicle. Only "car" and "truck" require a license.
    bool needs_license(std::string kind){
        if (kind == "car" || kind == "truck") {
            return true;
        }
        return false;
    }

    // choose_vehicle recommends a vehicle for selection. It always recommends the vehicle that comes first in lexicographical order.
    std::string choose_vehicle(std::string option1, std::string option2) {
        // Storing the rest of the sentence to be added after the car selected
        std::string sentence_template = " is clearly the better choice.";
        // Initializing the complete sentence to be returned
        std::string complete_sentence;
        // Checking if the first car comes up earlier in the lexicographical order
        if (option1 < option2) {
            // Concatenating the car option 1 to the rest of the sentence
            complete_sentence = option1 + sentence_template;
        } else { // --> If the first car comes up later
            // Concatenating the car option 2 as the default sentence
            complete_sentence = option2 + sentence_template;
        }
        // Returning the complete sentence
        return complete_sentence;
    }

    // calculate_resell_price calculates how much a vehicle can resell for at a certain age.
    double calculate_resell_price(double original_price, double age) {
        // Initializing variable to store the depreciated car price
        double car_new_value;
        // Checking age of the car
        if (age < 3.0) {
            // If car is less than 3 years old --> 80% of original price
            car_new_value = 0.80 * original_price;
        } else if (age >= 3 && age < 10) {
            // If car is greater than or equal to 3 but less than 10 years old --> 70% of original price
            car_new_value = 0.70 * original_price;
        } else {
            // Otherwise --> 50% of original price
            car_new_value = 0.50 * original_price;
        }
        // Returning the new, depreciated car price
        return car_new_value;
    }

}  // namespace vehicle_purchase