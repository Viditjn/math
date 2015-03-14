#include <stan/math/prim/scal/meta/is_vector_like.hpp>
#include <stan/math/prim/mat/meta/is_vector.hpp>
#include <stan/math/prim/arr/meta/is_vector.hpp>
#include <gtest/gtest.h>
#include <vector>

TEST(is_vector_like, MatrixXd) {
  EXPECT_FALSE(stan::is_vector_like<Eigen::MatrixXd>::value);
}

TEST(is_vector_like, vector_of_MatrixXd) {
  EXPECT_TRUE(stan::is_vector_like<std::vector<Eigen::MatrixXd> >::value);
}
