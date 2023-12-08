# Vectors can be used everywhere plain arrays is used. But it has some more functions

## Create vector - `vector<int> v {1, 2, 3};`
v = [1, 2, 3];

## Put elements to vector:
### 1. `v.push_back(10);`   
v = [1, 2, 3, 10];

Adds to the end of vector


### 2. `v.insert(v.begin() + 2, 5);`
v = [1, 2, 5, 3, 10];

Adds to the specific position(0-based indexing)

Makes so that, 5 is placed on the 2 index

### 3. `v.emplace_back(10, 20)`
v = [(1, 2), (3, 4), (10, 20)];

Usually is used, when you work with complex vectors, like: vector<pair<int> > v;

It is very similar to .push_back(), however is used to combine things into one element, and then add to the end

## Working with vectors:
### 1. Add elements
```
for(int i = 0; i < n; i++) {
  int x;
  cin >> x;
  v.push_back(x);
}
```

### 2. Access elements
```
for(int i = 0; i < v.size(); i++) {
  cout << v[i] << " ";
}
```
