using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            string writeText = "Hello world!";
            File.WriteAllText("testFile.txt", writeText);

            string readText = File.ReadAllText("testFile.txt");
            Console.WriteLine(readText);
            Console.ReadKey();
        }
    }
}
