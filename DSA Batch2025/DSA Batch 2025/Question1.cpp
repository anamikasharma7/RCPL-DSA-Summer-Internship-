//WAP to print student detail roll and cgpa.
//Note : Intialize roll and cgpa using constructor and print this detail via display function.
//Roll and cgpa must be data member of btech class.

#include<iostream>  // Required for input/output

class btech {

    public:
        int roll;       // Data member to store roll number
        float cgpa;     // Data member to store CGPA

        // Constructor using initializer list
        btech(int r, float c) : roll(r), cgpa(c) {}

        // Alternative way without initializer list (commented)
        // btech(int r, float c){
        //     roll = r;
        //     cgpa = c;
        // }

        // Function to display student details
        void display(){
            std::cout << "Roll: " << roll << std::endl;   // Fixed: Added std:: before endl
            std::cout << "CGPA: " << cgpa << std::endl;
        }
};

int main() {
    btech aryan(1, 9.5);  // Creating an object of btech class and initializing it
    aryan.display();      // Calling display function to print details
    return 0;
}
