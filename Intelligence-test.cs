using System;
namespace Intelligence 
{
  class Program
  {
    static void Main(string[] args)
    {
    	var rnd = new Random();
        int randomnum = rnd.Next(0, 101);
        bool smart = false;
        Console.WriteLine("whats their name?:");
        String name = Console.ReadLine();
        if (randomnum >= 50) {
        smart = true;
        }else if (randomnum < 50) {
        smart = false;
        }
        if (smart == true) {
        Console.WriteLine("their score is " + randomnum);
        Console.WriteLine(name + " is smart");
        }else if (smart == false) {
        Console.WriteLine("their score is " + randomnum);
        Console.WriteLine(name + " is stupid");
        }
    }
  }
}
