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
      cout << ("their score is %i \n", randomnum);
      cout << ("%s \n", name, " is smart");
    }
  else if (smart == false)
    {
      cout << ("their score is %i \n", randomnum);
      cout << ("%s \n", name, " is stupid");
    }
  return 0;
}
