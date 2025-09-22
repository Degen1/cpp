#include <iostream>
using namespace std;

int main() {


    double me = (int)3.14;
    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100;

    cout << score << endl;
    cout << me << endl;

    return 0;
}