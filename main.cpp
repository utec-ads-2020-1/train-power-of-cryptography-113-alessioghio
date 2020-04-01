#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
using namespace std;

int main(){
    string inputLine;
    stringstream ss;
    int n, k;
    double p;
    while (!(cin.eof())){
        getline(cin, inputLine);
        ss << inputLine;
        ss >> n;
        ss.clear();
        getline(cin, inputLine);
        ss << inputLine;
        ss >> p;
        ss.clear();
        k = round(pow(p, (float)1.0/(float)n));
        cout << k << endl;
    }
    return EXIT_SUCCESS;
}