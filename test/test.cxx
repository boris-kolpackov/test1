#include <iostream>

int main (int argc, char* argv[])
{
  using namespace std;

#if 0
  if (argc < 2)
  {
    cerr << "error: missing name to greet" << endl;
    return 1;
  }
#endif

  cout << "Hello, " << argv[1] << '!' << endl;
}
