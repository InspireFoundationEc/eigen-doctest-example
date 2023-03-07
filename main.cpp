#include <iostream>
#include <Eigen/Dense>
 
using Eigen::MatrixXd;

#include "my_functions.h"

int main()
{
  std::cout << "Hello from eigen-doctest example!" << std::endl;

  MatrixXd m(2,2);
  m(0,0) = 3;
  m(1,0) = 2.5;
  m(0,1) = -1;
  m(1,1) = m(1,0) + m(0,1);

  std::cout << "Here is a 2x2 matrix" << std::endl;
  std::cout << m << std::endl;

  MatrixXd id = get_identity_matrix(m);

  std::cout << "Here is a 2x2 identity matrix" << std::endl;
  std::cout << id << std::endl;
}