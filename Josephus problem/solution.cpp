#include <iostream>
#include <list>
using std::list;

// Return the prime(real) Kth person to be killed
int kPrime(int N, int K);

int main() {
    int N, K;
    std::cout << "Enter N(people) and K(Kth killed):\n";
    std::cin >> N >> K;

    list<int> lst;
    for (int i {1}; i <= N; i++) lst.push_back(i);

    K = kPrime(N, K);
    int rank {1};
    for (list<int>::const_iterator iter {lst.begin() }; !lst.empty(); ) {
        if (rank == K) {
            std::cout << *iter << " ";
            iter = lst.erase(iter);
            rank = 1;
        } else {
            rank++;
            iter++;
        }

        if (iter == lst.end() ) iter = lst.begin();
    }
    std::cout << std::endl;
}

int kPrime(int N, int K) {
    if (K <= N) return K;

    K = K % N;
    if (K == 0) K = N;
    return K;
}

