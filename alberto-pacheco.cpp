// hello.cpp

#include <iostream>
#include <vector>

using namespace std;

int main( int argc, char *argv[], char *envp[] )
{
    for ( int i = 0; envp[i] != nullptr; ++i ) {
        cout << i << ": " << envp[i] << endl;
    }
    cout << "\nHola ";
    if ( argc > 1 ) { // parameters?
        vector<string> args(argv, argv+argc);
        for (auto iter=args.begin() + 1; // skip first value
                  iter != args.end(); // until end
                  iter++) { // next value
             cout << *iter << " ";
        }
    } else {
        cout << "mundo!" << endl;
    }
    return 0;
}
