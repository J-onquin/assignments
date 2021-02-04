#include <iostream>

int fib(int n){
    if(n < 2){
        return 1;
    }
    else{
        return fib(n - 1) + fib(n - 2);
    }
}

int fibiter(int n){
    int current = 1;
    int next = 1;
    int temp;
    int result =1;
    if(n < 2){
        return result;
    }
    else{
        for(int i =1;i<n;i++){
            temp = current;
            current = next;
            next = current + temp;
        }
    }
    return next;
}


int step(int n){
    if(n == 1){
        return 1;
    }
    else if(n == 2){
        return 2;
    }
    else if(n == 3){
        return 4;
    }
    else{
        return step(n - 1) + step(n - 2) + step(n - 3);
    }

}


int main(){
    for(int i = 0; i <= 5; i++){
        std::cout << fib(i)<<", ";
    }

    std::cout << std::endl;

    for(int i = 0;i <= 5; i++){
        std::cout << fibiter(i)<<", ";
    }

    std::cout << std::endl;

    for(int i = 1; i <= 5; i++){
        std::cout << step(i)<<", ";
    }

    std::cout << std::endl;
    return 0;
}