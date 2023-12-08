# Deque

Dequeue is the ultimate great, because it it can do both stack and queue things
You probably should always use deque anytime you want to use queue or stack, just use deque instead

## Create deque - `deque<int> dq;`

## Put some elements:
```
q.push_front(10); dq = [10]
q.push_back(20);  dq = [10, 20]
q.push_front(30); dq = [30, 10, 20]
```

## Edit elements:
Very hard, probably you should not do it

## Get elements:
`dq.front();`
If dq = [10, 20, 30] the answer is 10, because 10 is in the front

`dq.back();`
If dq = [10, 20, 30] the answer is 30, because 30 is in the back

`dq.at(1):`
If dq = [10, 20, 30] the answer is 20, because 20 is in the 1 index

## Iterate through queue:
The very interesting part. In order to get to some element you need to go through almost all of them:
```
deque<int>::iterator it;
for (it = g.begin(); it != g.end(); it++) {
  cout << *it << endl;
}

Also you can do it with while(!dq.empty()) method
```

## Delete elements:
```
q.pop_back();

```
Before: dq = [10, 20, 30];
After: dq = [10, 20];

```
q.pop_front();

```
Before: dq = [10, 20, 30];
After: dq = [20, 30];
