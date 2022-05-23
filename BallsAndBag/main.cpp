#include <iostream>

static int count = 0;

class Ball
{
    int id;
    int R;
public:
    Ball(int size){
        this->id = ++count;
        this->R = size;
    }

    Ball() {}
};

class Bag
{
    Ball* balls;

public:
    Bag(Ball* balls){
         this->balls = balls;
    }
};





int main() {
    int n = 10;
    Ball balls[n];
    for (int i = 0; i < n; ++i) {
        balls[i] = Ball(n - i);
    }

    Bag bag = Bag(balls);

    return 0;
}
