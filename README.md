# Competitive Programming

## CodeForces

### Introduction

This is just a CodeForces competitive programming directory. Where we're going to code all our things. To avoid problems running in computers we have created a few things. Basically you need to create the `.in` and `.out` problems and run:

#### Ruby

`xxxx` is your problem code or whatever filename you put to your `xxxx.rb`, `xxxx.in` and `xxxx.out`

``` sh
make ruby PRG=xxxx
```


#### C++

`xxxx` is your problem code or whatever filename you put to your `xxxx.rb`, `xxxx.in` and `xxxx.out`

``` sh
make cpp PRG=xxxx
```

#### Golang

`xxxx` is your problem code or whatever filename you put to your `xxxx.rb`, `xxxx.in` and `xxxx.out`

``` sh
make go PRG=xxxx
```


#### After you solved it:

``` sh
make solve PRG=xxxx
```

#### Clean up the mess

``` sh
make clean PRG=xxxx
```


### Useful things

- [The ladder](https://a2oj.com/ladders) is an organized code forces set of problems increasing in difficulty.


## Tips&Tricks

### CPP

#### Debugging snippets:

``` c++
template<typename T> ostream& operator<<(ostream &os, const vector<T> &v) { os << '{'; string sep; for (const auto &x : v) os << sep << x, sep = ", "; return os << '}'; }
template<typename T, size_t size> ostream& operator<<(ostream &os, const array<T, size> &arr) { os << '{'; string sep; for (const auto &x : arr) os << sep << x, sep = ", "; return os << '}'; }
template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
```

### Ruby
