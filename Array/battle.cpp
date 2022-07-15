#include <iostream>
using namespace std;

int main() {
 bool ships[4][4]=
 {
 {0,0,0,1},
 {0,0,0,1},
 {0,0,0,1},
 {0,0,0,1},
  };
  int row, column;

  int hits=0,numberOfTurns=0;
  cout<<"ENter your row between 0: 3"<<endl;
  cin>>row;
  cout<<"Enter column between 0:3"<<endl;
  cin>>column;
 while (hits < 4) {
    int row, column;

    cout << "Selecting coordinates\n";

    // Ask the player for a row
    cout << "Choose a row number between 0 and 3: ";
    cin >> row;

    // Ask the player for a column
    cout << "Choose a column number between 0 and 3: ";
    cin >> column;

    // Check if a ship exists in those coordinates
    if (ships[row][column]) {
      // If the player hit a ship, remove it by setting the value to zero.
      ships[row][column] = 0;

      // Increase the hit counter
      hits++;

      // Tell the player that they have hit a ship and how many ships are left
      cout << "Hit! " << (4-hits) << " left.\n\n";
    } else {
      // Tell the player that they missed
      cout << "Miss\n\n";
    }

    // Count how many turns the player has taken
    numberOfTurns++;
  }

  cout << "Victory!\n";
  cout << "You won in " << numberOfTurns << " turns";

  return 0;
}
