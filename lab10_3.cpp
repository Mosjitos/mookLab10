#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

int main(){
    int N=0;
    float mean, sum = 0, powx = 0, SD;

    ifstream source;
    source.open("score.txt");
    string textline;
    while(getline(source,textline))
    {
        sum += atof(textline.c_str());
        powx += pow(atof(textline.c_str()),2);
        N++;
    }
     mean = sum/N;
     SD = sqrt((powx/N)-mean*mean);

    cout << "Number of data = " << N << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << SD << endl;
}