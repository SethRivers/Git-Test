
#include <iostream>
using namespace std;

/*gets a sum by adding the numbers 1 - n
 *n: a numerical integar
 */
int sum(int n);

int main() {
  int n;
  
  cout<<"Please type in a number: ";
  cin>>n;
  int s = sum(n);
  cout<<"The sum of the numbers 1 - "<<n<<" is: "<<s<<endl;
  
  return 0;
}

int sum(int n){
  int sum = n;

  for (int i = 1; i < n; i++){
    sum += i;
  }

  return sum;
}
