#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime> // For time()

using namespace std;

int main() {
    // Seed thde random number generator
    srand(time(0));
    
    //generate a random number 
    int secretNumber=rand()%100+1;
    
    int guess;
    int attempts=0;
    
    cout<< "Enter the random number between 1 to 100"<<endl;
    do {
        cout<< "Enter your guess:";
        cin>> guess;
        attempts++;
        if (guess<secretNumber){
            cout<<"The number is too low"<<endl;
            }
            else if(guess>secretNumber){
            cout<<"The number is too high"<<endl;
            } 
            else{
                cout<<"Congratulations!, You have guessed the number in "<< attempts<<" attempts";
            }
    }
        
    while (guess!= secretNumber);
    return 0;
}