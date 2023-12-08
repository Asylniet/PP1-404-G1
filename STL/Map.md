# Maps are used to link elements

Map is great, because it remains unique, automatically sorts by keys and very fast in memory

## Create map - `map<string, int> mp;`
When writing types, be careful! The first is for key, the second is for value

The key is the thing with which you want associate your object. For example, I want to store names as keys and their score in endterm as values.

So I use `<string, int>` type for map;

## Put some elements:
```
mp["Aiza"] = 28;
mp["Asylniet"] = 0;
```

## Edit elements:
`mp["Asylniet"] = 1000`
So this notation won't create new object, instead will rewrite the old value of key "Asylniet" with 1000; If there was no "Asylniet" it just creates

## Get elements:
`cout << mp["Aiza"];`
Would give us 28

## Iterate through map:
```
map<string, int>::iterator it; // The type of it must be the same as map's
for(it = mp.begin(); it != mp.end(); it++) {
  cout << it->first << " " << it->second << endl;
}
```
Here the `it` is the name of iterator, it can be everything you want. 

Note: `it` becomes the object in map. It is different from a[i], because i was just a number, `it` is the pointer to the specific object in map

You can access key by `it->first`, and the value by `it->second`;

## Delete elements:
```
mp.erase(mp.begin()) // Deletes first object
mp.erase("Asylniet") // Deletes object with key "Asylniet"
```
