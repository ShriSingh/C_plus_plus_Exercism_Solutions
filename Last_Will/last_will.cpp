// Enter your code below the lines of the families' information

// Secret knowledge of the Zhang family:
namespace zhang {
    int bank_number_part(int secret_modifier) {
        int zhang_part{8'541};
        return (zhang_part*secret_modifier) % 10000;
    }
    namespace red {
        int code_fragment() {return 512;}
    }
    namespace blue {
        int code_fragment() {return 677;}
    }
}

// Secret knowledge of the Khan family:
namespace khan {
    int bank_number_part(int secret_modifier) {
        int khan_part{4'142};
        return (khan_part*secret_modifier) % 10000;
    }
    namespace red {
        int code_fragment() {return 148;}
    }
    namespace blue {
        int code_fragment() {return 875;}
    }
}

// Secret knowledge of the Garcia family:
namespace garcia {
    int bank_number_part(int secret_modifier) {
        int garcia_part{4'023};
        return (garcia_part*secret_modifier) % 10000;
    }
    namespace red {
        int code_fragment() {return 118;}
    }
    namespace blue {
        int code_fragment() {return 923;}
    }
}

// Defining the namespace "estate_executor"
namespace estate_executor {
    // Creating a function called "assemble_account_number(int secret_modifier)"
    int assemble_account_number(int secret_modifier) {
        // Calling bank_number_parts from the families and storing them in a variable
        int zhang_bank_number{zhang::bank_number_part(secret_modifier)};
        int khan_bank_number{khan::bank_number_part(secret_modifier)};
        int garcia_bank_number{garcia::bank_number_part(secret_modifier)};
        // Adding up the stored values from the variables above
        int total_bank_parts = zhang_bank_number + khan_bank_number + garcia_bank_number;
        // Returning the sum of all parts
        return total_bank_parts;
    }

    // Creating a function called "assemble_code()" 
    int assemble_code() {
        // Calling red code_fragments() from the families and storing their sum
        int red_fragments{zhang::red::code_fragment() + khan::red::code_fragment() + garcia::red::code_fragment()};
        // Calling blue code_fragments() from the families and storing their sum
        int blue_fragments{zhang::blue::code_fragment() + khan::blue::code_fragment() + garcia::blue::code_fragment()};
        // Multplying the sums of red and blue code fragments
        int fragment_product = red_fragments * blue_fragments;
        // Returning the product of all red and blue code fragments
        return fragment_product;
    }
}