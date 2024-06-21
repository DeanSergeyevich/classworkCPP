using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using System.Text;
using System.Threading.Tasks;

namespace LessonTasks
{
    internal static class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter task number:");
            int taskNumber = int.Parse(Console.ReadLine());
            switch (taskNumber)
            {
                case 1: SolveTask1(); break;
                case 2: SolveTask2(); break;
                case 3: SolveTask3(); break;
                case 4: SolveTask4(); break;
                default: Console.WriteLine("Unknown task"); break;
            }
        }

        // Урок 7. Повтор, исключения, Сборка мусора...
         private static void SolveTask1() 
        {
        //    const string separator = "|";
        //    string caption = null;
        //    string body = null;
        //    if(caption.Contains())
        //    File.WriteAllText("asdf.txt", string.Join(separator, caption, body);
        }


        // Урок 9 Делегаты
        private static void SolveTask2() 
        {
            int count = 0;
            Action<char> increment = symbol => count++;
            for(int i = 0; i < 10; i++) 
            {
                increment('*');
            }

            count -= 1;

            Console.WriteLine($"asdf: {count}");
        }

        private static void SolveTask3()
        {
            char symbol = '*';
            Action lambda1 = () =>
            {
                for (int i = 0; i < 4; i++)
                {
                    Console.Write(i % 2 == 0 ? symbol : ' ');
                }
            };

            symbol = '|';

            for(int i = 0; i < 10; i++) 
            {
                lambda1();
                Console.WriteLine();
            }

            //var random = new Random();
            //Action lambda2 = () =>
            //{
            //    int printIndex = random.Next(0, 4);
            //    for (int i = 0; i < 4; i++)
            //    {
            //        Console.Write(i == printIndex ? '*' : ' ');

            //    }

            //};
        }

        private static void SolveTask4() 
        {
            char symbol = '*';
            Action lambda1 = () =>
            {
                for (int i = 0; i < 4; i++)
                {
                    Console.Write(i % 2 == 0 ? symbol : ' ');
                }
            };

            var random = new Random();
            Action lambda2 = () =>
            {
                int printIndex = random.Next(0, 4);
                for (int i = 0; i < 4; i++)
                {
                    Console.Write(i == printIndex ? '*' : ' ');

                }
            };

        }
    }
}
