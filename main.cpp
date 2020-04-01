#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

int main(){
    string inputLine;
    stringstream ss;
    fstream file("input.txt");
    int n,k;
    float p;
    while (!(file.eof())){
        getline(file, inputLine);
        ss << inputLine;
        ss >> n;
        ss.clear();
        getline(file, inputLine);
        ss << inputLine;
        ss >> p;
        ss.clear();
        k = pow(p, 1.0/n);
        cout << k << endl;
    }
    return EXIT_SUCCESS;
}