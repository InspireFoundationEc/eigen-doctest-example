#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include <Eigen/Dense>
 
using Eigen::MatrixXd;

#include "my_functions.h"

TEST_CASE("Test that get_identity_matrix returns an identity matrix"){
    MatrixXd m(2,2);
    m(0,0) = 3;
    m(1,0) = 2.5;
    m(0,1) = -1;
    m(1,1) = 7;

    MatrixXd id = get_identity_matrix(m);
    CHECK(id(0,0) == 1);
    CHECK(id(1,0) == 0);
    CHECK(id(0,1) == 0);
    CHECK(id(1,1) == 1);
}