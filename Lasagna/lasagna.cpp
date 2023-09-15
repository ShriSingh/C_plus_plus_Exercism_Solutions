// ovenTime returns the amount in minutes that the lasagna should stay in the
// oven.
int ovenTime() {
    // Setting the expected oven time to "40 minutes"
    return 40;
}

/* remainingOvenTime returns the remaining
   minutes based on the actual minutes already in the oven.
*/
int remainingOvenTime(int actualMinutesInOven) {
    // Creating a variable to store the total oven time
    int totalTime = ovenTime();
    // Creating a variable to store the difference result
    int remainingTime;
    // Calculating the remaining oven time
    remainingTime = totalTime - actualMinutesInOven;
    // Returning the difference result
    return remainingTime;
}

/* preparationTime returns an estimate of the preparation time based on the
   number of layers and the necessary time per layer.
*/
int preparationTime(int numberOfLayers) {
    // Storing the amount of time it takes to make a Lasagna layer
    int minsForEachLayer = 2;
    // Storing the amount of time it takes to makes all the layers
    int totalTimeForLayers;
    // Calculating the total time it takes to make all the lasagna layers
    totalTimeForLayers = minsForEachLayer * numberOfLayers;
    // Returning the product result
    return totalTimeForLayers;
}

// elapsedTime calculates the total time spent to create and bake the lasagna so
// far.
int elapsedTime(int numberOfLayers, int actualMinutesInOven) {
    // Storing the total time in lasagna preparation
    int timeForPreparation = preparationTime(numberOfLayers);
    // Storing the total time spent preparing and baking Lasagna
    int totalElapsingTime;
    // Calculating the total time spent preparing and baking Lasagna
    totalElapsingTime = actualMinutesInOven + timeForPreparation;
    // Returning the result
    return totalElapsingTime;
}
