idf_component_register( SRCS "esp32-eigen.cpp"
                        INCLUDE_DIRS "."
                        PRIV_INCLUDE_DIRS "../eigen")

# Not sure how to use blas calls. (https://eigen.tuxfamily.org/dox/TopicUsingBlasLapack.html)
# - #define EIGEN_USE_BLAS before #include Eigen gives "undefined reference to `dtrsm_'"
option(EIGEN_USE_BLAS "Enable EIGEN_USE_BLAS" OFF)
option(EIGEN_USE_LAPACKE "Enable EIGEN_USE_LAPACKE" OFF)
