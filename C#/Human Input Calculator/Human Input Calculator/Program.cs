using System;

namespace Human_Input_Calculator
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Welcome to Andrew's Calculator version 1.0");
            Console.WriteLine("Here you can:");
            Console.WriteLine("Add + ");
            Console.WriteLine("Subtract - ");
            Console.WriteLine("Multiply X ");
            Console.WriteLine("Divide / ");
            Console.WriteLine("Or..." );
            Console.WriteLine("Exponentiate * !!!");

            Console.WriteLine("Please enter the first number of your calculation: ");
            int num1 = Int32.Parse(Console.ReadLine());

            Console.WriteLine("Please enter the second number of your calculation: ");
            int num2 = Int32.Parse(Console.ReadLine());

            Console.WriteLine("Please enter the operation you would like to use from the afore mentioned +, -, X, /, or *: ");
            string operation = Console.ReadLine();

            Console.WriteLine("Is this your equation?: ");
            Console.WriteLine(num1 + operation + num2);





        
            
            
        }
    }
}
