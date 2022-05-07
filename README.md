# Simple example port of Eigen which can run on ESP32

1. Ran `idf.py create-project esp32-eigen`
2. Copied in eigen.
3. Copied in a simple function that uses eigen.
4. Added include dir to `main/CMAkeLists.txt`
5. idf.py build flash monitor.