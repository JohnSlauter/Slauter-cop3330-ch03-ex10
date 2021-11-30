/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 John Slauter
 */

#include "std_lib_facilities.h"
#include "ch3ex10.h"

using namespace ns;

int main(){

    string operation;

    double num1, num2, result;

    char opcode;

    try{

        cin >> operation;

        cin >> num1;

        cin >> num2;

        if(!cin){

            throw runtime_error("Invalid Input.");

        }

        opcode = ns::convert_operation(operation);

        result = ns::calculate(num1, num2, opcode);

    }

    catch(exception& err){

        cout << err.what();

        return 1;

    }

    cout << num1 << " " << opcode << " " << num2 << " = " << result;    

    return 0;

}

char ns::convert_operation(string operation){

    /*

        A switch statement should be used here, 
        but unfortunately the problem mandates 
        the usages of if/else.

    */

    if(operation == "+" || operation == "plus"){

        return '+';

    }

    else if(operation == "-" || operation == "minus"){

        return '-';

    }

    else if(operation == "*" || operation == "mul"){

        return '*';

    }

    else if(operation == "/" || operation == "div"){

       return '/';

    }

    else{

        throw runtime_error("Invalid Operation.");

    }

}

double ns::calculate(double num1, double num2, char opcode){

    switch(opcode){

        case '+':{

            return num1 + num2;

        }

        case '-':{

            return num1 - num2;

        }

        case '*':{

            return num1 * num2;

        }

        case '/':{

            return num1 / num2;

        }

        default:{

            throw runtime_error("Invalid Operation.");

        }

    }

}