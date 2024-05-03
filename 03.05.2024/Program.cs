using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;


namespace Lesson
{

    class main
    {
        private static void task1()
        {
            Console.WriteLine(CalcualteProductInRange(1, 6));
        }

        internal static int CalcualteProductInRange(int from, int to)
        {
            int _product;
            for (int i = from; i <= to; i++)
            {
                _product *= i;
            }

            return _product;
        }

        private static void task2() 
        {
            int valueToCheck = int.Parse(Console.ReadLine());
            bool foundInFibonachiSeqence = false;
            Fibonachi(10, item =>
            {
                if(item >= valueToCheck) 
                {
                    if (item == valueToCheck)
                        foundInFibonachiSeqence = true;
                    return true;
                }
                return false;
            });

           
        }

        private static int Fibonachi(int n, Func<int, bool> visitOrStop)
        {
            if (n < 0) throw new ArgumentException("n<0");

            if (n == 0 || n == 1) 
            {
                if (visitOrStop(n)) return -1;
                return n; 
            }

            int sum = Fibonachi(n - 1, visitOrStop) + Fibonachi(n - 2, visitOrStop);
            if (visitOrStop(sum)) return -1;
            return sum;
        }


        private static void task3() 
        {
            int[] array = new[] { 3, 2, 1 };
            Array
        }

    }

}