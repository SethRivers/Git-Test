
#include <iostream>
using namespace std;

/*gets the sum and product by adding the numbers 1 - n
 *n: a numerical integar
 *sum: the sum of the equation 
 */
int sum(int n);

/*gets the product by adding the numbers 1 - n
 *n: a numerical integar
 *product: the product of the equation
 */
int product(int n);

int main() {
  int n;
  
  cout<<"Please type in a number: ";
  cin>>n;
  int s = sum(n);
  int p = product(n);
  cout<<"The sum of the numbers 1 - "<<n<<" is "<<s<<" and the product is "<<p<<endl;
  
  return 0;
}

int sum(int n){
  int sum = n;

  for (int i = 1; i < n; i++){
    sum += i;
  }

  return sum;
}

int product(int n){
  int product = n;
  for (int i = 1; i < n; i++){
    product *= i; 
  }
  
  return product;   
}
