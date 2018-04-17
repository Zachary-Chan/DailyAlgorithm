#include <iostream>
#include <list>
using std::list;

template <typename Object>
void printLots(const list<Object>& L, const list<int>& P) {
    typename list<Object>::const_iterator lItr {L.begin() };
    typename list<int>::const_iterator pItr {P.begin() };

    // 遍历P的元素
    // 同时定义一个表示当前lItr指向的下标表示器
    for (int idx_cur {}; lItr != L.end() && pItr != P.end(); pItr++) {
      while (idx_cur < *pItr && lItr != L.end() ) {
        idx_cur++;
        lItr++;
      }

      if (lItr != L.end() ) {
        std::cout << *lItr << std::endl;
      }
    }
}

int main() {
    list<int> lst1 {1, 2, 3, 4, 5, 6, 7, 8};
    list<int> lst2 {3, 5, 7};

    printLots(lst1, lst2);
}

