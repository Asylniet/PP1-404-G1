# Sets are used to store unique elements

Sets are great, because it remains unique, automatically sorts by values and very fast in memory

## Create set - `set<int> s;`

## Put some elements:
```
s.insert(1);
s.insert(1);
s.insert(2);
```
s = [1, 2]

## Edit elements:
Really hard, probably should not do it

## Check if element is inside of set:
`cout << s.find(2) != s.end()`
Should give 1, because we have 2 in our set

## Iterate through set:
```
set<int>::iterator it; // The type of it must be the same as set's
for(it = set.begin(); it != set.end(); it++) {
  cout << *it << " ";
}
```
Here the `it` is the name of iterator, it can be everything you want. 

Note: `it` becomes the link to element in set. It is different from a[i], because i was just a number, `it` is the pointer to the specific object in set

## Delete elements:
```
s.erase(s.begin()) // Deletes first object
s.erase(2) // Deletes 2 from set
```
