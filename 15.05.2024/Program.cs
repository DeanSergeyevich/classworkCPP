using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Lesson 
{
 
    public class main 
    {
        private void Task1()
        {
            INumberGenerator generatorAsInterface = null;
            var generateNumbers = new int[10];
            NumberGeneratorExtensions.Generate(generatorAsInterface, generateNumbers);
            generatorAsInterface.Generate(generateNumbers);
            Console.WriteLine(generateNumbers);
        }

    //    private static int GenerateNext(GeneratorType generatorType, int prevValue) 
    //    {
    //        switch (generatorType) 
    //        {
    //            case GeneratorType.Even:
    //                return 0;
    //            case GeneratorType.Odd:
    //                break;
    //            case GeneratorType.Simple:
    //                break;
    //            case GeneratorType.Fibanachi:
    //                break;
    //        }
    //    }

    //      private enum GeneratorType
    //{
    //    Even,
    //    Odd,
    //    Simple,
    //    Fibanachi
    //}

        private interface INumberGenerator 
        {
            void Generate(int[] generateNumbers);
            int GeneratorNext();
        }

        private static class NumberGeneratorExtensions 
        {
            public static void Generate(INumberGenerator generator, int[] output) 
            {
                    for (int i = 0; i < output.Length; i++)
                    {
                        output[i] = generator.GeneratorNext();
                    }
                
            }
        }
        
       

        private abstract class NumberGenerator 
        {
            public abstract int GenerateNext();

             public void Generate(int[] output) 
            {
                for(int i = 0; i < output.Length; i++) 
                {
                    output[i] = GenerateNext();
                }
            }
        }

        //public sealed class MaxValueNumberGenerator : NumberGenerator
        //{
        //   public static MaxValueNumberGenerator Default { get; } = 
        //    public sealed override int GenerateNext()
        //    {
        //        return int.MaxValue;
        //    }
        //}

        private class EventNumberGenerator : NumberGenerator 
        {
            public override int GenerateNext()
            {
                throw new NotImplementedException();
            }
        }
    }

  
}