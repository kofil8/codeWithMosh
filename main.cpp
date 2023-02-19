#include <iostream>
using namespace std;

int main() {
//    lect-25
//    int number = numeric_limits<int>::max();
//    number++;
//    int num = numeric_limits<int>::min();
//    num--;
//    cout << number << " "<< num;

//    int result = sizeof(int);
//    int result = sizeof(double);
//    int result = sizeof(long long);
//    int result = sizeof(long);
//
//    cout << result;


//     int x = 1;
//     double y = 23.4;
//     int z = x + static_cast<int>(y);
//     cout << z;
//    int x = 10;
//    int y = 3;
//    double z = static_cast<double>(x) / y;
//    cout << z;
//    string str;
//    cout << "Enter your name: ";
//    getline(cin,str);
//
//
//    cout << "Hi! "<< str;
//    int x = 10;
//    double y = 5;
//    bool result = x == y;
//    cout << boolalpha << result;

//    char first = 'a';
//    char second = 'b';
//    bool result = first == second;
//    cout << boolalpha << result;

//32
//    int age = 20;
//    int salary = 50000;
//    bool isEligible = (age > 18 && age < 65) || (salary > 30000);
////    bool isEligible = age > 18 || age < 65;
//    cout << boolalpha << isEligible;

//33

    //()
    // !
    // &&
    // ||
//    bool a = true;
//    bool b = false;
//    bool c = false;
//    bool result = (a || b) && c;
//    cout << boolalpha << result;

//    int usCitizen, bachelor, workExp;
//    cout << "Enter citizen: ";
//    cin >> usCitizen;
//
//    cout << "Enter Degree: ";
//    cin >> bachelor;
//
//    cout << "Enter Experience: ";
//    cin >> workExp;
//
//    bool jobApp = (usCitizen && bachelor) || workExp;
//    cout << boolalpha << jobApp;

//    bool isCitizen = false;
//    bool hasBachelorDegree = true;
//    short yearsOfExperience = 10;
//    bool isEligible = isCitizen && (hasBachelorDegree || yearsOfExperience >=2);
//    cout << boolalpha << isEligible;

//34

//    int temperature = 150;
//    if(temperature < 60)
//        cout <<  "cold ";
//    else if (temperature < 90)
//        cout << "Nice";
//    else
//        cout << "Hot";
//    int sales = 11000;
//    double commission;
////    cout << "Enter the sales of cash:";
//    cin >> sales;
//    if(sales <= 10000) commission = .1;
//
//    else if (sales <= 15000) commission = .15;
//    else commission = .2;
//
//    cout << commission;


//36
    //US Citizen
    // CA Resident: tuition = 0
    // Non Resident: tuition = 1000
    // Not a US citizen


//    bool isCitizen = true;
//    bool caResident = true;
//    short tuition = 0;
//    //Outer if statement
//    if (isCitizen) {
//        //Inner if statement
//        if (!caResident) tuition = 1000;
//
//    }
//    else tuition = 3000;


//36 conditional operator

//    int sales = 11000;
//    double commission = (sales > 10000) ? .1 : .05;
//    cout << commission;
    //    if (sales > 10000) commission = 0.1;
//    else commission = 0.05;

//    int firstNum, secondNum;
//    cout << "Enter 1st num: ";
//    cin >> firstNum;
//    cout << "Enter 2nd num: ";
//    cin >> secondNum;
//
//    int large = (firstNum > secondNum) ? firstNum : secondNum;
//    cout << large;
//    if(firstNum > secondNum) {
//        large = firstNum;
//        cout << large;
//    }
//    else {
//        large = secondNum;
//        cout << large;
//    }

//37
//
// cout << "1- Create account" << endl
//        << "2- Change password" << endl
//        << "3- Quit" << endl
//        << "Select an option: ";
//
//     short input;
//     cin >> input;
//
//    switch (input) {
//        case 1:
//            cout << "You selected 1";
//            break;
//
//        case 2:
//            cout << "You selected 2";
//            break;
//
//        default:
//            cout <<"Good Bye";
//    }

//     if(input == 1)
//         cout << "You selected 1";
//     else if (input == 2)
//         cout << "you selected 2";
//     else
//         cout << "Good bye";

    cout << "<<-Welcome to Basic Calculator->>" << endl;

    double firstNum, secondNum;
    char op;
//    cin >> firstNum >> secondNum;
    cout << "Enter FirstNumber: ";
    cin >> firstNum;

    cout << "Enter SecondNumber: ";
    cin >> secondNum;

    cout << "Choose an operator: " <<endl
         << "+ for Addition" << endl
         << "- for Subtraction" << endl
         << "* for Multiplication" << endl
         << "/ for Division" << endl
         << "0 for exit" << endl;
    cout << "Enter an operator: ";
    cin >> op;

    switch (op) {
        case '+':
            cout << firstNum + secondNum;
            break;

        case '-':
            cout << firstNum - secondNum;
            break;

        case '*':
            cout << firstNum * secondNum;
            break;

        case '/':
            cout << firstNum / secondNum;
            break;

        case '0':
            break;

        default:
            cout << "Invalid Operator";

    }




    return 0;
}
