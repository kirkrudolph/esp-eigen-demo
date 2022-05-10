# Simple example port of Eigen which can run on ESP32

1. Ran `idf.py create-project esp32-eigen`
2. Copied in eigen.
3. Copied in a simple function that uses eigen.
4. Added include dir to `main/CMAkeLists.txt`
5. `idf.py build flash monitor`


## Future ideas to enable blas calls
1. Configure Eigen
```
-- Configured Eigen 3.4.0
-- 
-- Available targets (use: cmake --build . --target TARGET):
-- ---------+--------------------------------------------------------------
-- Target   |   Description
-- ---------+--------------------------------------------------------------
-- install  | Install Eigen. Headers will be installed to:
--          |     <CMAKE_INSTALL_PREFIX>/<INCLUDE_INSTALL_DIR>
--          |   Using the following values:
--          |     CMAKE_INSTALL_PREFIX: /usr/local
--          |     INCLUDE_INSTALL_DIR:  include/eigen3
--          |   Change the install location of Eigen headers using:
--          |     cmake . -DCMAKE_INSTALL_PREFIX=yourprefix
--          |   Or:
--          |     cmake . -DINCLUDE_INSTALL_DIR=yourdir
-- doc      | Generate the API documentation, requires Doxygen & LaTeX
-- check    | Build and run the unit-tests. Read this page:
--          |   http://eigen.tuxfamily.org/index.php?title=Tests
-- blas     | Build BLAS library (not the same thing as Eigen)
-- uninstall| Remove files installed by the install target
-- ---------+--------------------------------------------------------------
```
2. build static blas library (.a) (I know this works)
```
$ cmake --build . --target blas
[26/26] Linking CXX static library eigen/blas/libeigen_blas_static.a
build/eigen/blas/libeigen_blas_static.a
```
4. [Link static library](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/api-guides/build-system.html#using-prebuilt-libraries-with-components) (would this work?)
