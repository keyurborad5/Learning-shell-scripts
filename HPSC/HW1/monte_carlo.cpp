#include <iostream>
#include <cmath>
#include <random>
#include <omp.h>
#include <ctime>
using namespace std;
std::default_random_engine generator;
std::uniform_real_distribution<double> distribution(0,1);

int main(){
    long long N=12;
    double a,m,n;
    long long count;
    clock_t time_req;
    int threads;
    //time_req = clock();
    for (int j=1;j<=8;j++){
time_req = clock();
        omp_set_num_threads(j);
        //#pragma omp threadprivate(val)
        count=0;
        
       
        time_t start1;
        #pragma omp parallel for reduction(+:count)
        for (int i=1;i<=N;i++){
            double m = distribution(generator);
            double n= distribution(generator);
            //cout<< "Iteration : "<< i <<" THREAD ID: "<< omp_get_thread_num()<<endl ;
            if (n<cos(m*(M_PI)-(M_PI/2))){
            count=count+1;
            }
            threads=omp_get_num_threads();
    
        }
        cout <<" total threads: "<< threads<< endl;
        //time_t total_time;
        
        //a = a+total_time;
        
        //if (j==0) break;
    
    time_req =clock()- time_req;
    //cout<<count<<endl;
    //cout<<N<<endl;
    cout<<"TIME: "<< ((float)time_req/(CLOCKS_PER_SEC))/(1*threads) <<endl;
    double fraction=  double(count)/long(N);
    cout <<"ANSWER: " << fraction*M_PI <<endl<<"*********************************************"<<endl;
}
}


//g++ -Xpreprocessor -fopenmp monte_carlo.cpp -o monte -lomp
