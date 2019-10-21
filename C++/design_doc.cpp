Program inputs = {
Monthly Salary:
Number of months worked:
Cost of Car:
Number of cars sold:
Number of misconducts observed in past year:
Tax year sales took place in:
Tax state sales took place in:
}

Calculations 
{
    //GROSS INCOME CALUCLATIONS
    gross income = annual salary +2%profit - deduction
    annual salary = monthly salary * number of months worked
    profit = cars sold * avg selling price (randomly generated number that is 5%->10% cost of the car) //use rand
    deduction = 
    {
        0 if misconducts = 0
        100*2^num_misconducts-1 // use pow()
        //punishment rises exponentionally with more misconducts
    }





    // TAX YEAR 2017   
    if tax year = 2017 
    {
        //STATE A
        if state = a 
        {
            taxes = income - income*0.6
        }

        //STATE B
        if state = b 
        {

            if income < $2000 
            {
                taxes = 0
            }

            if $2000 < income < $10000 
            {
                taxes = $100

            }

            if income > $10000 {
                taxes = income*1.1+$100
            }
        }

        // STATE C
        if state = c 
        {
            if 0 < income < $3500
            {
                taxes = income*1.05
            }

            if $3500 < income < $9000
            {
                taxes = income*1.07 + $115
            }

            if $9000 < income < $125000
            {
                taxes = income*1.09 + $560
            }

            if income > $125000
            {
                taxes = income*1.99 + $11007
            }
        }
    }

    if tax year = 2018
    {
        if state = a
        {
            taxes = income*1.08
        }

        if state = b
        {
            if income < $2500
            {10.5% x
                taxes = $115
            }

            if $2500 < income < $10000
            {
                taxes = $115
            }

            if income > $10000
            {
                taxes = income*1.105 + $115
            }
        }

        if state = c 
        {
            if 0 < income < $3450
            {
                taxes = income*1.05
            }

            if $3450 < income < $8700
            {
                taxes = income*1.07+172.5
            }

            if $8700 < income < $125000
            {
                taxes = income*1.09 + $11007
            }
        }
    }
}