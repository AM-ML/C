#include "search.h"

int search(int a[], int l, int r, int x) {
  if (l <= r) {
    int mid = l + (r - l) / 2;

    if (a[mid] == x)
      return mid;

    if (a[mid] < x)
      return search(a, mid + 1, r, x);

    return search(a, l, mid - 1, x);
  }

  return -1; // not found
}
