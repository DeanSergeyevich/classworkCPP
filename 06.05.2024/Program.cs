using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Lesson 
{
    internal class Program
    {

        private static DateTime ValueExample;
        private int _property1;

        private static void SolveTask1() 
        {
            string str = Console.ReadLine();
            try
            {
                int val = Parse(str);
                Console.WriteLine(val);
            }
            catch (Exception) 
            {
                throw;
            }
        }

        private static int Parse(string str) 
        {
            if (str == null)
                throw new ArgumentNullException(nameof(str));

            int num;
            if (!int.TryParse(str, out num))
                throw new ArithmeticException("Invalid number");

            if (num > 10) throw 
                    new ArgumentOutOfRangeException(nameof(str));
        }
    }
}
