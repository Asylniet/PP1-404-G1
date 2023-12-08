# STL main principles
### Almost all STL structures follow same logic. 
For example: 
- `.empty()` return bool whether the structure is empty or not.
- Also you can add elements to structure using one of `insert(position, value)` or `push(value)`
- To delete from back or front of container `.pop()`
- To delete at specific position or element `.erase(position)` or `.erase(value)`
- To delete all elements `.clear()`
- To get the size of container `.size()`
Such patterns make it easy to remember all fo those rules. 

### If you don't know which STL to choose, you can follow this algorithm:
- If you need to track some unique values -> set or map
  - If you just need to store unique values -> set
  - If you need to somehow link unique values -> map
    - For example: map["Aiza"] = 28, which can mean that the person "Aiza" scored 28 points in exam
- If you handle with some sequence, like ((()())) or 01011010 and so on -> stack, queue, deque
  - Now you just need to look what is better for you, the only way to know, is to somehow simulate your future code in head(which is hard) or paper
  - For simplicity you can always use deque, it have powers of both - queue and stack
- If you just can use array -> vector

### Insetion cheat sheet
```
vector -> push_back() or insert()
set -> insert()
stack, queue -> push()
deque -> push_front() or push_back()
```
