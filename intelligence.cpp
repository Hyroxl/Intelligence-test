#include <iostream>
#include <random>
#include <time.h>
using namespace std;

int
main ()
{

  srand (time (NULL));
  bool smart = false;
  string name = "null";
  int randomnum = rand () % 101;
  int randomnum2 = rand () % 5;
  cout << "whats their name?: \n";
  cin >> name;
  if (randomnum >= 50)
    {
      bool smart = true;
    }
  else if (randomnum < 50)
    {
      bool smart = false;
    }
  if (smart == true)
    {
      cout << "their score is " << randomnum << "\n";
      cout << name << " is smart \n";
    }
  else if (smart == false)
    {
      if (randomnum2 == 0)
	{
	  cout << "their score is " << randomnum << "\n";
	  cout << name << " is stupid \n";
	}
      else if (randomnum2 == 1)
	{
	  cout << "their score is " << randomnum << "\n";
	  cout << name << " is maidenless \n";
	}
      else if (randomnum2 == 2)
	{
	  cout << "their score is " << randomnum << "\n";
	  cout << name << " needs to touch grass \n";
	}
      else if (randomnum2 == 3)
	{
	  cout << "their score is " << randomnum << "\n";
	  cout << "your mom \n";
	}
      else if (randomnum2 == 4)
	{
	  cout << "their score is " << randomnum << "\n";
	  cout << name << " is short \n";
	}
    }
  return 0;
}
