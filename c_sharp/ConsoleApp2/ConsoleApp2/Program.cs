using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp2
{
    class Program
    {
        static void Main(string[] args)
        {
            /*
            //Tinh toan co ban
            int x, y;
            Console.WriteLine("Nhap vao hai so : ");
            x = Convert.ToInt32(Console.ReadLine());
            y = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine($"Gia tri cua hai bien x y la : {x + y}");
            Console.WriteLine($"Gia tri cua hai bien {x} +  {y} la : {x + y}");
            Console.WriteLine("Tong cua hai so {0} va {1} la : {2}", x, y, x + y);
            Console.WriteLine("Hieu cua hai so {0} va {1} la : {2}", x, y, x - y);
            Console.WriteLine("Tich cua hai so {0} va {1} la : {2}", x, y, x * y);
            Console.WriteLine("Thuong cua hai so {0} va {1} la : {2}", x, y, (float)x / y);
            */

            /*
            //Doi gia tri hai so 
            int x, y, temp;
            Console.WriteLine("Nhap vao hai so : ");
            x = Convert.ToInt32(Console.ReadLine());
            y = Convert.ToInt32(Console.ReadLine());
            temp = x;
            x = y;
            y = temp;
            Console.WriteLine("Gia tri cua x la : {0} " +
                "\nGia tri cua y la : {1}", x, y);
            */

            /*
            //Nhap vao mot so roi in ra bang nhan cua no
            Console.WriteLine("Nhap vao mot so : ");
            int x = int.Parse(Console.ReadLine());
            for(int i = 0; i <= 10; i++)
            {
                Console.WriteLine($"{x} * {i} = {x*i}");
            }
            */

            /*
            //Tinh trung binh bon so
            int x, y, z, w;
            Console.WriteLine("Nhap vao bon so : ");
            x = int.Parse(Console.ReadLine());
            y = int.Parse(Console.ReadLine());
            z = int.Parse(Console.ReadLine());
            w = int.Parse(Console.ReadLine());
            float ave = ((float)x + y + z + w) / 4;
            Console.WriteLine(ave);
            */

            /*
            Console.WriteLine("Nhap vao kich thuoc mang : ");
            int size = int.Parse(Console.ReadLine());
            int[] a = new int[size];
            int tong = 0;
            for(int i = 0; i < size; i++)
            {
                Console.Write($"Nhap vao so thu {i} : ");
                a[i] = int.Parse(Console.ReadLine());
                tong += a[i];
            }

            foreach (int i in a)
            {
                Console.Write(i + " ");
            }

            Console.WriteLine("\nTong : " + tong);
            */



            Console.ReadKey();
        }
    }
}
