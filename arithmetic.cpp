//
//  arithmetic.cpp
//  Arithmetic Test for Meimei
//
//  Created by Darrell Huang on 12/24/19.
//  Copyright © 2019 Darrell Huang. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include <chrono>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello Elizabeth\n";
    int x, y, z;
    int total, answer;
    int correct = 0;
    int wrong = 0;
    int counter = 1;
    char problem_type;
    
    std::cout << "What types of problems would you like?\n";
    std::cout << "a : addition\n";
    std::cout << "s : subtraction\n";
    std::cout << "m : multiplication\n";
    std::cout << "d : division\n";
    std::cin >> problem_type;
    
    std::cout << "How many problems would you like?\n";
    std::cin >> total;
    
    srand(time(NULL));
    auto start = std::chrono::high_resolution_clock::now();
    do{
        if (problem_type == 'm'){
        // Generate a random number from 2 to 9
            x = rand() % 8 + 2;
            y = rand() % 8 + 2;
            z = x * y;
            
            std::cout << "PROBLEM " << counter << std::endl;
            std::cout << x << " * " << y << std::endl;
            std::cin >> answer;
            
            if (answer == z){
                std::cout << "YOU GOT IT!\n\n";
                correct++;
            }
            else{
                std::cout << "Nope, the correct answer was " << z << std::endl << std::endl;
                wrong++;
            }
        }
        
        else if (problem_type == 'd'){
            // Generate a random number from 2 to 9
            x = rand() % 8 + 2;
            y = rand() % 8 + 2;
            z = x * y;
            
            std::cout << "PROBLEM " << counter << std::endl;
            std::cout << z << " / " << y << std::endl;
            std::cin >> answer;
            
            if (answer == x){
                std::cout << "YOU GOT IT!\n\n";
                correct++;
            }
            else{
                std::cout << "Nope, the correct answer was " << x << std::endl << std::endl;
                wrong++;
            }
        }
        else if (problem_type == 'a'){
            // Generate a random number from 2 to 9
            x = rand() % 100 + 1;
            y = rand() % 20 + 1;
            z = x + y;
            std::cout << "PROBLEM " << counter << std::endl;
            
            if (rand() % 2){
                std::cout << x << " + " << y << std::endl;
                std::cin >> answer;
            }
            else{
                std::cout << y << " + " << x << std::endl;
                std::cin >> answer;
            }
            
            if (answer == z){
                std::cout << "YOU GOT IT!\n\n";
                correct++;
            }
            else{
                std::cout << "Nope, the correct answer was " << z << std::endl << std::endl;
                wrong++;
            }
        }
        else if (problem_type == 's'){
            // Generate a random number from 2 to 9
            x = rand() % 100 + 21;
            y = rand() % 20 + 1;
            z = x - y;
            std::cout << "PROBLEM " << counter << std::endl;
            std::cout << x << " - " << y << std::endl;
            std::cin >> answer;
            
            if (answer == z){
                std::cout << "YOU GOT IT!\n\n";
                correct++;
            }
            else{
                std::cout << "Nope, the correct answer was " << z << std::endl << std::endl;
                wrong++;
            }
        }
        counter++;
    } while(answer != 0 && counter <= total);
    
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::seconds>(stop - start);
    
    std::cout << "Total Time: " << duration.count() << " seconds" << std::endl;
    std::cout << "Correct: " << correct << "/" << total << std::endl;
    //std::cout << "Wrong: " << wrong << std::endl;
    return 0;
}

