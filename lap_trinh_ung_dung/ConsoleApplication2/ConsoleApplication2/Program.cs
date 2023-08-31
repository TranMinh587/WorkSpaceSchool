using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ConsoleApplication2
{
    class Program
    {
        static void Main(string[] args)
        {
            int a, b;
            Console.WriteLine("Nhap vao hai so : ");
            a = int.Parse(Console.ReadLine());
            b = int.Parse(Console.ReadLine());
            int sum = a + b;
            Console.WriteLine("Tong cua hai so : " + sum);
            Console.ReadKey();
        }
    }
}
