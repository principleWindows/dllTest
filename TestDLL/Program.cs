using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TestDLL
{
    class Program
    {
        static void Main(string[] args)
        {
            int r1 = DllTest.testAdd(1, 2);

            int r2 = DllTest.testMulti(5, 2);

            Console.WriteLine("testAdd结果：" + r1.ToString());

            Console.WriteLine("testMulti结果：" + r2.ToString());

            Console.ReadKey();
        }
    }
}
