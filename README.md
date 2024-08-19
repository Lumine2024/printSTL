This is a function that allows you to easily print all the values of STL in C++

The entry is simply:

print(values, name);

The "values" mentioned above may be a vector, deque, list, set, unordered_set, multiset, unordered_multiset, map, unordered_map

And the "name" is how the cout will call the value

For example:

vector<int> v={1,2,3,4,5};

print(v);

Output result:

the vector's size is 5

containing elements:

1 2 3 4 5

and:

vector<int> v={1,2,3,4,5};

print(v,"v");

Output result:

v's size is 5

containing elements:

1 2 3 4 5

I hope it helpful :)
