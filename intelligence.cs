using System;
namespace Intelligence 
{
  class Program
  {
    static void Main(string[] args)
    {
    	var rnd = new Random();
        int randomnum = rnd.Next(0, 101);
        int randomnum2 = rnd.Next(0, 5);
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
          if (randomnum2 == 0){
              Console.WriteLine("their score is " + randomnum);
              Console.WriteLine(name + " is stupid");
          } else if (randomnum2 == 1) {
              Console.WriteLine("their score is " + randomnum);
              Console.WriteLine(name + " is maidenless");
          } else if (randomnum2 == 2) {
              Console.WriteLine("their score is " + randomnum);
              Console.WriteLine(name + " needs to touch grass");
          } else if (randomnum2 == 3) {
              Console.WriteLine("their score is " + randomnum);
              Console.WriteLine("your mom");
          } else if (randomnum2 == 4) {
              Console.WriteLine("their score is " + randomnum);
        	  Console.WriteLine(name + " is short");
          }
        }
    }
  }
}
