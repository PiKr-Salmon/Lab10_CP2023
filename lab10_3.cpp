#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    int count = 0;
    float sum,meann,sosq = 0;
    string textline;
    ifstream source("score.txt");
    while (getline(source,textline))
    {
        sum += stof(textline);
        sosq += pow(stof(textline),2);
        count++;
    }
    meann = sum/count;
    cout << "Number of data = " << count <<endl;
    cout << setprecision(3);
    cout << "Mean = " << meann <<endl;
    cout << "Standard deviation = " << sqrt( (sosq/count) - pow(meann,2) ) << endl;
    
  return 0;
}
//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
