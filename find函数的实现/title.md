Implement the STL find routine that returns the iterator containing the first occurrance of x in the range that begins at start and extends up to but not including end. If x is not found, end is returned. This is a nonclass (global function) with signature
```
    template <typename Iterator, typename Object>
    Iterator find(Iterator start, Iterator end, const Object& x);
```