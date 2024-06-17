using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Security.Authentication;
using System.Text;
using System.Threading.Tasks;


namespace ClassWork 
{
    internal class Program
    {
        static void Main(string[] args) 
        {
            Console.WriteLine("Введите номер задания:");
            int taskNumber = int.Parse(Console.ReadLine());
            switch (taskNumber)
            {
                case 1:
                    SolveTask1();
                    break;
                case 2:
                    SolveTask2();
                    break;
                case 3:
                    SolveTask3();
                    break;
                case 4:
                    SolveTask4();
                    break;
                case 5:
                    SolveTask5();
                    break;
                case 6:
                    SolveTask6();
                    break;
                case 7:
                    SolveTask7();
                    break;
                default:
                    Console.WriteLine("Неизвестный номер");
                    break;
            }

            Console.WriteLine("Нажмите любую кнопку для выхода..");
            Console.ReadKey();
        }


        private static void SolveTask1() 
        {
            string input = Console.ReadLine();
            File.WriteAllText("myfile.txt", input);
            Console.WriteLine(File.ReadAllText("myfile.txt"));
        }

        private static void SolveTask2()
        {
            using (FileStream fileStream = File.OpenRead("myfile.txt")) 
            {
                int read;
                do
                {
                    read = fileStream.ReadByte();
                    Console.Write(read);
                }
                while (read >= 0);
            }
        }
        private static void SolveTask3()
        {
            using (FileStream file = File.OpenRead("myfile.txt"))
            
            //using (var sr = new StreamReader(file, , , , leaveOpen:false ))

            using (var sr = new StreamReader(file)) // мы проверили, что добираться до 
            {

            }
            
        }
        private static void SolveTask4()
        {
            using(FileStream file = File.Open(
                "myfile.txt",
                FileMode.Create,
                FileAccess.ReadWrite,
                FileShare.None)) 
                using (var bw = new BinaryWriter(file))
            {
                bw.Write(245);
                bw.Write(245);
                bw.Write(245);
                bw.Write(56745);
                bw.Write(655333);
                bw.Write("asdfasdf ");
                bw.Write("привет");
            }

        }
        private static void SolveTask5()
        {

        }
        private static void SolveTask6()
        {

        }
        private static void SolveTask7()
        {

        }
    }
}