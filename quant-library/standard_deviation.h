#include <iostream>
#include <cmath>
using namespace std;



Class StandardDeviation{
private:
    float calculateSD(float data[]);

public:

float calculateSD(float data[]) {
    float sum = 0.0, mean, standardDeviation = 0.0;
    int i;
    int arrayLength = sizeof(data) / sizeof(int);
    for (i = 0; i < arrayLength; ++i) {
        sum += data[i];
    }

    mean = sum / arrayLength

    for (i = 0; i < arrayLength; ++i) {
        standardDeviation += pow(data[i] - mean, 2);
    }

    return sqrt(standardDeviation / arrayLength);
}
}



// Usage Example

//int main() {
//    int i;
//    float data[n];
//
//    cout << "Enter n elements: ";
//    for (i = 0; i < n; ++i) {
//        cin >> data[i];
//    }
//
//    cout << endl << "Standard Deviation = " << calculateSD(data);
//
//    return 0;
//}
