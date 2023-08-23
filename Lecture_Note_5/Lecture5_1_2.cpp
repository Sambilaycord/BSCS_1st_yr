#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    const int NUMBER_OF_TRAILS = 1000000;
    int OddRegion_count = 0;

    srand (time(0));

    for (int i = 0; i < NUMBER_OF_TRAILS; i++){
        double x = double(rand()) / RAND_MAX;
        double y = double(rand()) / RAND_MAX;

        if (x < 0.5 && y < 0.5 || x >= 0.5 && y >= 0.5)
        OddRegion_count++;
    }

    double OddRegion_prob = ((double)OddRegion_count / NUMBER_OF_TRAILS) * 100;
    cout << "The probability of a dart landing in an odd-numbered region is " << OddRegion_prob << "%" << endl;

    return 0;
}
