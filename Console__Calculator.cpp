#include <iostream>
#include <iomanip>

short op;

void menu();
double addition();
double subtraction();
double multiplication();
double division();

int main(){

  
    std::cout << std::fixed << std::showpoint << std::setprecision(3);
    
    while(true){

      menu();

        if(op == 5){
            std::cout << "Exiting program";
            exit(0);
        }
        else if(op == 1){
            std::cout << "Result: " << addition();
        }
        else if(op == 2){
            std::cout << "Result: " << subtraction();
        }
        else if(op == 3){
            std::cout << "Result: " << multiplication();
        }
        else if(op == 4){
            std::cout << "Result: " << division();
        }}

    return 0;
}

void menu(){

    do{std::cout << "--------------------------------\n";
    std::cout << "-------Select an operator-------\n";
    std::cout << "1. Addition\n";
    std::cout << "2. Subtraction\n";
    std::cout << "3. Multiplication\n";
    std::cout << "4. Division\n";
    std::cout << "5. Exit\n";
    std::cout << "Select 1 - 5\n";
    std::cin >> op;
    }while(op < 1 || op > 5);

}

double addition(){
    
    double x;
    double y;

    std::cout << "Enter numbers you want to add: ";
    std::cin >> x >> y;
    return (x + y);
}

double subtraction(){
    
    double x;
    double y;

    std::cout << "1st number - 2nd  number\n";
    std::cout << "Enter 1st number of expression: ";
    std::cin >> x;
    
    std::cout << "Enter 2nd number of expression: ";
    std::cin >> y;
    return (x - y);
}

double multiplication(){
    
    double x;
    double y;

    std::cout << "Enter numbers you want to multiply: ";
    std::cin >> x >> y;
    if(x == 0 || y == 0){
        std::cout << "Multiplying with zero gives a null result.\n";
        return 0;
    }
    else
    return (x * y);
}

double division(){

    double x;
    double y;

    std::cout << "1st number / 2nd number\n";
    std::cout << "Enter the 1st number: ";
    std::cin >> x;

    do{std::cout << "Enter the 2nd number: ";
    std::cin >> y;
        if(y == 0){
            std::cout << "Division by zero is not possible, try another number.\n";
        }
    }while(y == 0);
    
    return (x/y);
}
