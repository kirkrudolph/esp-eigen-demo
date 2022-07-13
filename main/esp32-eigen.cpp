#include <stdio.h>
#include <iostream>
#include "Eigen/Dense"
#include "Eigen/SVD"
#include "mpu6050.h"

using Eigen::MatrixXd;

extern "C" int test();

int test()
{
  std::cout << std::endl << "Running......" << std::endl; 
  MatrixXd m(2,2);
  m(0,0) = 3;
  m(1,0) = 2.5;
  m(0,1) = -1;
  m(1,1) = m(1,0) + m(0,1);
  std::cout << std::endl << "Simple addition" << std::endl << m << std::endl;

  Eigen::Matrix<double,2,2> J;

  J << 10, 0,
        0, 3.14;

  // Solve J^-1
  MatrixXd x1 = J.lu().solve(MatrixXd::Identity(J.rows(),J.cols()));
  std::cout << std::endl << "LU Decomp" << std::endl << x1 << std::endl;

/* Not working
  // S(VD)
  MatrixXd A = MatrixXd::Random(15,15);
  MatrixXd x2 = J.bdcSvd().solve(MatrixXd::Identity(J.rows(),J.cols()));
  std::cout << std::endl << "S(VD) Decomp" << std::endl << x2 << std::endl;
*/
    return 0;
}

extern "C" void app_main(void);

void app_main(void)
{
    printf("Hello World\n");
    test();
    i2c_port_t busA = 0; 
    mpu6050_create(busA,0x8A);

}
