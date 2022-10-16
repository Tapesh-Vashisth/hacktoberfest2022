using System;

namespace SwitchStatement
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter number (0-6 ): ");
           int day =Convert.ToInt32 (Console.ReadLine());
            Console.WriteLine(GetDay(day));
        }
    static string GetDay(int dayNum)
        {
            Console.WriteLine("Today is ");
            string dayName;
            switch (dayNum)
            {
                case 0:
                    dayName = "sunday";
                    break;
                case 1:
                    dayName = "monday";
                    break;
                case 2:
                    dayName = "Tuesday";
                    break;
                case 3:
                    dayName = "wednesday";
                    break;
                case 4:
                    dayName = "Thrusday";
                    break;
                case 5:
                    dayName = "Friday";
                    break;
                case 6:
                    dayName = "saturday";
                    break;
                default:
                    dayName = "Invalid number";
                    break;
            }
            return dayName;
        }   
    }
}
