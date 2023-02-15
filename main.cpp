/*------------------------------------------

Program 1: Matryoshka Dolls
Prompt for the number of dolls and display
ASCII Matryoshka dolls in decending order
above each other.

Student Name: Pratik Patel

Original ASCII graphics gives:
------------------------------------------
     Happy New Year!  Welcome to:
    ___      __     ___     ___
       \    /  \       \       \
       /   |    |      /       /
      /    |    |     /       /
     /     |    |    /       /
    /____   \__/    /____   /____

------------------------------------------

---------------------------------------------*/

#include <iostream>   // for cin and cout
#include <iomanip>    // for setw. The number in setw(...) is the total of blank spaces including the printed item.

using namespace std; // so that we don't need to preface every cin and cout with std::

int main()
{
  // Display the menu and get the user choice
  int menuOption = 0;
  cout << "Program 1: Matryoshka Dolls            \n"
       << "Choose from among the following options:  \n"
       << "   1. Display original graphic  \n"
       << "   2. Display Matryoshka Dolls         \n"
       << "   3. Exit the program          \n"
       << "Your choice -> ";
  cin  >> menuOption;

  // Handle menu option of 3 to exit
  if (menuOption == 3) {
      exit(0);
  }
  // Handle menu option of 1 to display custom ASCII graphics
  else if (menuOption == 1) {
      // My own graphic.  You must create your own.
      cout << setw(8) << " ";
      // Display a line across the top
      for (int i = 0; i < 46; i++) {
          cout << "-";
      }
      cout << endl;
      // Display ASCII graphics for "2022".  Yours must be different!
      cout << setw(10) << "            My favorite class so far in 2022 is... \n\n"
            << setw(10) << "          _____    ______    /*|      /*|      /*|     \n"
            << setw(10) << "        /         /         /  |     /  |     /  |     \n"
            << setw(10) << "       /         /             |    /___|__      |     \n"
            << setw(10) << "      |:        :-------:      |        |        |     \n"
            << setw(10) << "       \\               /       |        |        |     \n"
            << setw(10) << "        \\_____   _____/     ___|___     |     ___|___  \n\n"
            << setw(10);

      // Display a line across the bottom
      for (int i = 0; i < 46; i++) {
          cout << "-";
      }
      cout << endl;
  } //end if( menuOption == 1)  // menu option to display custom graphic

  else if (menuOption == 2) {
    // Prompt for and get the number of dolls.
    int numberOfDolls = 0;
    cout << "Number of dolls -> ";
    cin >> numberOfDolls;

    // Place your code starting here
    
    //a loop which dispays dolls head and body
    for (int head = 0; head < numberOfDolls; head++) {
      
      //display head of the doll
      cout << setw(numberOfDolls + 3) << "( )" << endl; 

      //a loop inside a loop which output upper part opf the doll
      for (int body = 0; body <= head; body++) {
        cout << setw(numberOfDolls - body) << "/";

        //if-else statement alternate between - and : using module operator
        if (head % 2 == 0 && body == 0) {
          cout << " - ";
        }
        else if (body == 0) {
          cout << " : ";
        }
        
        //final statement outputting empty spaces in the middle
        else {
          //loop indicating spaces and body of the doll
          for (int rightHead = 0; rightHead <= (2 * (body+1)); rightHead++) {
            cout << " ";
          }
        }
        cout << "\\" << endl;
      }

      //loop which will print bottom part of the doll
      for (int leftBody = head; leftBody >= 0; leftBody--) {
        cout << setw(numberOfDolls - (leftBody - 1)) << "\\";

        for (int dollBody = 0; dollBody <= ( 2 * leftBody ); dollBody++) {
          cout << " ";
        }
        
        //to print the right side of the lower part
        cout << "/" << endl;
      }

      //finally to print the leg
      cout << setw(numberOfDolls + 2) << "-" << endl;
    }
  } // end if( menuOption == 2) // menu option to display dolls

  cout << "Exiting" << endl;
  return 0;
}
