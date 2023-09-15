// eat_ghost returns a boolean value if Pac-Man is able to eat the ghost.
/* The function should return true only if Pac-Man has a power pellet active
and is touching a ghost.
*/
bool can_eat_ghost(bool power_pellet_active, bool touching_ghost) {
    // Checking if power pellet is active and pac-man is touching the ghost
    if (power_pellet_active == true && touching_ghost == true) {
        // Returning 'true' if the above condition is met
        return true;     
    }
    // Returning the default response
    return false;
}

// score returns a boolean value if Pac-Man scored.
/* The function should return true if Pac-Man is touching a power pellet or a
dot. 
*/
bool scored(bool touching_power_pellet, bool touching_dot) {
    // Checking if a power pellet or a dot or both has been eaten
    if (touching_power_pellet == true || touching_dot == true) {
        // Returning 'true' if either has been eaten
        return true;
    }
    if (touching_power_pellet == true && touching_dot == true) {\
        // Returning 'true' is both have been eaten
        return true;
    }
    // Returning the default response
    return false;
}

// lost returns a boolean value if Pac-Man loses.
/* The function should return true if Pac-Man is touching a ghost and
does not have a power pellet active.
*/
bool lost(bool power_pellet_active, bool touching_ghost) {
    // Checking whether the power pellet is not active and the ghost is touched
    if (power_pellet_active == false && touching_ghost == true) {
        // Returning 'true' if the above condition is met
        return true;
    }
    return false;
}

// won returns a boolean value if Pac-Man wins.
/* The function should return true if Pac-Man
has eaten all of the dots and has not lost
*/
bool won(bool has_eaten_all_dots, bool power_pellet_active,
         bool touching_ghost) {
    // Checking whether all the pellets are eaten, touching is not touching, and the power pellet is active
    if (has_eaten_all_dots == true && touching_ghost == false) {
        // Return 'true' if all the dots are eaten and the ghost is not touching
        return true;
    }   
    if (has_eaten_all_dots == true && touching_ghost == true && power_pellet_active == true) {
        // Returning 'true' if all dots are eaten, the ghost is touching, and the power pellet is active
        return true;
    }
    // Returning the default response
    return false;
}