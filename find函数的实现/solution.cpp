template <typename Iterator, typename Object>
Iterator find(Iterator start, Iterator end, const Object& x) {
  Iterator itr {start};
  while ( *itr != x && itr != end) {
    itr++;
  }

  // 最后*iter可能是x，或者iter到达最后的end
  // 直接返回即可
  return itr;
}
