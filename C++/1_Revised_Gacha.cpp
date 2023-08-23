#include <iostream>
#include <cmath>
#include <cstdlib>
#include <random>

using namespace std;

//Pull randomizer and result
void pullRandomizer(int& pull, int& count_4_star, double three_star_chance, double four_star_chance, double five_star_chance){
    random_device rd; // Randomizer
    mt19937 gen(rd());

    uniform_real_distribution<> dis(0,100); //sets randomizer value to 0-100
    float random_num = dis(gen);
    cout << random_num << endl;
    
    string five_Star = "*****Five Star*****";
    string four_Star = "****Four Star****";
    string three_Star = "***Three Star***";
    
    //checks and displays the rarity 
    if (random_num <= three_star_chance) {
        count_4_star++;
        if (count_4_star == 10){  //4-star guarantee system
            cout << four_Star << endl;
            count_4_star = 0;
        }else{
            cout << three_Star << endl;
        }
    }else if (random_num > three_star_chance && random_num <= three_star_chance + four_star_chance){
        cout << four_Star << endl;
        count_4_star = 0;
    }else {
        cout << five_Star << endl;
        pull = 0;
    }
}

//5-star pity guarantee system
void pity(int& pull, int& count_4_star, double three_star_chance, double four_star_chance, double five_star_chance){
    pull++;
    if (pull <= 74){
        three_star_chance = 90;
        four_star_chance = 9.4;
        five_star_chance = 0.6;

    }else if (pull >= 75 && pull <= 89){  //probability to get a 5-star increases
        three_star_chance = 53;
        four_star_chance = 14;
        five_star_chance = 33;

    }else { 
        three_star_chance = 0;
        four_star_chance = 0;
        five_star_chance = 100; //90 pulls 5-star guarantee
    }

    pullRandomizer(pull, count_4_star, three_star_chance, four_star_chance, five_star_chance);
}

int main(){
    int pull = 0, count_4_star = 0, input;
    double three_star_chance = 0, four_star_chance = 0, five_star_chance = 0;
    
    while(true){
        cout << "\nGenshin Impact Wishing Simulator" << endl;
        cout << "1. Single Pull" << endl;
        cout << "2. 10 Pulls" << endl;
        cout << "3. Exit" << endl;
        cout << "\nInput your command: "; 
        if (!(cin >> input)) {   // check if input is valid
            cout << "Invalid input. Exiting program." << endl;
            return 0;
        }

        switch(input){
        case 1:
            pity(pull, count_4_star, three_star_chance, four_star_chance, five_star_chance);
            cout << "5-Star count: " << pull << endl;
            cout << "4-star counter: " << count_4_star << endl;
            break;
        case 2:    //10 pulls
            for(int i = 0; i < 10; i++){
            pity(pull,count_4_star,three_star_chance,four_star_chance,five_star_chance);
            }
            cout << "5-Star count: " << pull << endl;
            cout << "4-star counter: " << count_4_star << endl;
            break;
        case 3:
            return 0;
        default:
            cout << "Wrong number input, try again." << endl;
        }
    }

    return 0;
}       
  
     