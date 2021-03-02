//Authors: 
#include <iostream>
#include <string>
using namespace std;
string name;
string place;
string adjective;
string food;
string food2;
string adjective2;
string adjective3;

int main()
{
  cout << "Enter a place" << endl;
  cin >> place;
  cout << "Enter a name" << endl;
  cin >> name;
  cout << "Enter an adjective" << endl;
  cin >> adjective;
  cout << "Enter a food" << endl;
  cin >> food;
  cout << "Enter another adjective" << endl;
  cin >> adjective2;
  cout << "Enter another food" << endl;
  cin >> food2;
  cout << "Enter another adjective" << endl;
  cin >> adjective3;
  cout << "All done\n" << endl;
  cout << "I went on a trip with my friend " << name << " to " << place << " it was so " << adjective2 <<  " we ate so much local food. My favorite dish was " << food << " with " << food2 << " on it. It tasted very " << adjective << ". Overall our trip was very " << adjective3 << endl; 
  return 0;
}
