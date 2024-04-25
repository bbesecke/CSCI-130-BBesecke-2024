

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  int rpt;
  string word;
  cin >> word;
  cin >> rpt;

  if (rpt <= 0)
  {
    cout << "Repeat count should be greater than 0." << endl;
    return 1;
  }

  for (int i = 0; i < rpt; i++)
  {
    cout << word;
  }
}
