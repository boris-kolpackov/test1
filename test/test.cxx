#include <iostream>

int f ()
{
}

int main (int argc, char* argv[])
{
  using namespace std;

  if (argc < 2)
  {
    cerr << "error: missing name to greet" << endl;
    return 1;
  }

  cout << "Hello, " << argv[1] << '!' << endl;
}
