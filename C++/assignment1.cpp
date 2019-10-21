// Program: assignment1.cpp - CS161
// Author: Andrew Pynch - pyncha@oregonstate.edu
// Student ID: 932-953-192
// Description: Simple program to calculate take home pay after deductions and taxes for a car salesman

#include <iostream> // input output
#include <stdlib.h> // rand() function
#include <math.h> // pow() function
#include <sstream>

using namespace std; // now we don't have to affix inputs / outputs with std::cout etc...

int main() 
{
    // WELCOME USER - EXPLANATION
    cout << "Hello! Welcome to Ultra Turbo Tax - Cars Salesman Tax Calculator Extreme 2019 edition! " << endl;
    cout << "This program is to be used by a car salesmen attempting to calculate their earnings after taxes " << endl;
    cout << "In order to being, we first need to collect a couple pieces of information from you " << endl;



    // TAKE INPUTS
    int tax_year;
    cout << "Please enter the tax year for which you are making calculations (i.e: 2017 or 2018)" << endl;
    cin >> tax_year;
    cout << "You are doing your taxes for fiscal year " << tax_year << endl; 


    string state;
    cout << "Please enter the State you inhabit: A, B, or C. " << endl;
    cout << "Only enter the letters A, B, or C for your state! " << endl;
    cin >> state;
    cout << "You are performing your taxes from State " << state << endl;


    double monthly_salary;
    cout << "Please enter your monthly salary in $USD: " << endl;
    cin >> monthly_salary;
    cout << "Your monthly salary is $" << monthly_salary << endl;


    int num_months;
    cout << "Please enter the number of months you worked in " << tax_year << endl;
    cin >> num_months;
    cout << "You worked " << num_months << " months in " << tax_year << endl;


    int car_price;
    cout << "Please enter the price of a car: " << endl;
    cin >> car_price;
    cout << "Car price is $" << car_price << endl;

    // RANDOM PROFIT % CALCULATIONS
    // Call srand to randomize the seed
    srand(time(NULL));

    int profit_percent_num = rand() % 5 + 5;
    double profit_percent = profit_percent_num*0.01;
    cout << "Profit %" << profit_percent << endl;


    int num_cars_sold;
    cout << "Please enter the number of cars you sold in " << tax_year << endl;
    cin >> num_cars_sold;
    cout << "You sold " << num_cars_sold << " cars in " << tax_year << endl;


    // Some extra logic to shame the user if they committed a lot of misconducts that year >.< 
    int misconducts;
    cout << "Please enter the number of misconducts you commited in " << tax_year << endl;
    cin >> misconducts;
    if (misconducts == 0)
    {
        cout << "Nice job! you committed " << misconducts << " misconducts in " << tax_year << endl;
    }

    else if (1 < misconducts < 5)
    {
        cout << "Hmm... You need to be more ethical. You committed " << misconducts << " misconducts in " << tax_year << endl;
    }

    else
    {
        cout << "UNBELIEVEABLE! YOU COMMITTED " << misconducts << " MISCONDUCTS IN " << tax_year << " SHAMEFUL!" << endl;
    }


    // CALCULATIONS

    // GROSS INCOME 
    // Gross income = Annual salary + 2% of the profit – Deduction
    double annual_salary = monthly_salary * num_months;
    cout << "Your annual salary is $" << annual_salary << endl;

    int avg_car_price = car_price * (1 + profit_percent);
    cout << "Average price of a veihicle you sold is $" << avg_car_price << endl;

    double profit = num_cars_sold * (avg_car_price - car_price);
    cout << "Your profit in " << tax_year << " was $" << profit << endl;

    double deduction;
    if (misconducts == 0)
    {
        deduction = 0;
    }
    // Using POW() to exponentionally punish for more misconducts
    else
    {
        deduction = 100 * (pow(2, misconducts-1));
    }
    cout << "You will pay: $" << deduction << " off of your pay in misconduct related deductions in " << tax_year << endl;


    // Gross Income Final Calculation
    double gross_income = annual_salary + (profit * 0.02) - deduction;
    cout << "Your gross income for " << tax_year << " before tax is $" << gross_income << endl;



    // CALCULATE TAXES
    // TAX YEAR 2017   
    double taxes;
    if (tax_year == 2017)
    {
        // 2017 STATE A
        if (state == "a" || state == "A")
        {
            taxes = gross_income * .06;
        }

        // 2017 STATE B
        else if (state == "b" || state == "B")
        {
            if (gross_income < 2000)
            {
                taxes = 0;
            }
            else if (2000 < gross_income < 10000)
            {
                taxes = 100;
            }
            else 
            {
                taxes = (gross_income * .9) + 100;
            }
        }

        // 2017 STATE  C
        else if (state == "c" || state == "C")
        {
            if (gross_income < 3500)
            {
                taxes = gross_income * .05;
            }
            else if (3500 < gross_income < 9000)
            {
                taxes = (gross_income *.07) + 175;
            }
            else if (9000 < gross_income < 125000)
            {
                taxes = (gross_income * .09) + 560;
            }
            else
            {
                taxes = (gross_income * .099) + 11000;
            }
        }
    }


    // 2018
    else if (tax_year == 2018)
    {
        //2018 STATE A
        if (state == "a" || state == "A")
        {
            taxes = gross_income * .08;
        }

        //2018 STATE B
        else if (state == "b" || state == "B")
        {
            if (gross_income < 2500)
            {
                taxes = 0;
            }

            else if (2500 < gross_income < 10000)
            {
                taxes = 115;
            }

            else
            {
                taxes = (gross_income * .105) + 115;
            }
        }

        //2018 STATE C
        else if (state == "c" || state == "C")
        {
            if (gross_income < 3450)
            {
                taxes = gross_income * .05;
            }

            else if (3450 < gross_income < 8700)
            {
                taxes = (gross_income * .07) + 172.5;
            }

            else if (8700 < gross_income < 125000)
            {
                taxes = (gross_income * .09) + 540;
            }

            else
            {
                taxes = (gross_income * .099) + 11007;
            }
        }
    }

    cout << "Your taxes owed are: $" << taxes << endl;
    cout << "Your takehome pay after taxes is: $" << gross_income - taxes << endl;
}