#include <string>

namespace log_line {
    /*
    Creating a string function "message" to return the message from the log line
    */
    std::string message(std::string prompt) {
        // Storing the index value after the log level(including the space)
        int logLineMessage = prompt.find(":") + 2; // Starting from the 1st letter of the message
        // Returning the message from the log line
        return prompt.substr(logLineMessage);
    }

    /*
    Creating a string function "log_level" to return the log level from the log line
    */
    std::string log_level(std::string prompt) {
        // Storing the index from where the first letter of the log level starts
        int firstIndex = prompt.find("[") + 1;
        // Storing the index from where the last letter of the log level ends
        int lastIndex = prompt.find("]") - 1;
        // Returning the log level stated
        return prompt.substr(firstIndex, lastIndex);
    }

    /*
    Creating a string function "reformat" to return the message ahead and the log level after it in parentheses
    */
    std::string reformat(std::string prompt) {
        // Returning the concatenated string after shifting messages and logs
        return message(prompt) + " (" + log_level(prompt) + ")";
    }
} // namespace log_line