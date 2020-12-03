#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n,m;
  cin >> n >> m;

  vector<int> planes;
  while(m--) {
    int p;
    cin >> p;
    planes.push_back(p);
  }

  sort(planes.begin(), planes.end());

  //  Calculate Minimum Cost
  // -----------------------------------------------------------------
  //  This is calculated starting from the plane which has the less
  //  amount of available seats to make it cheaper
  int min_cost = 0;
  for(int i=0, passengers=n; passengers; ++i) {
    int available_seats = planes[i];

    if(passengers >= available_seats) {
      min_cost += (available_seats * (available_seats+1)) / 2; // [1]
      passengers -= available_seats; // Seat passengers
    } else {
      for(;passengers;--passengers,--available_seats)
        min_cost += available_seats;
      break; // No more passengers
    }
  }


  //  Calculate Maximum Cost
  // -----------------------------------------------------------------
  //  This is calculated starting from the plane which has the most
  //  amount of available seats to make it cheaper
  int max_cost = 0;
  m = planes.size();
  for(int passengers=n, i=m-1; passengers; --passengers) {
    //  These whiles try to find the plane with most available seats
    while(i<m-1 && (planes[i+1] > planes[i]))
      ++i;
    while(i>0 && (planes[i-1] == planes[i]))
      --i;

    //  MAX COST is the cost of the available seats on that plane
    max_cost += planes[i];
    //  Take that seat out of the pool
    --planes[i];
  }


  cout << max_cost << " " << min_cost;

  return 0;
}


/*
 * [1] I realized that these are the costs of having n seats available on a plane
 *
 * n     cost
 * 1     1
 * 2     2 + 1
 * 3     3 + 2 + 1
 * 4     4 + 3 + 2 + 1
 *
 * Therefore the cost of having n seats available is  n + (n-1) + (n-2) + ... + 2 + 1 = (n * (n+1)) / 2
  */
