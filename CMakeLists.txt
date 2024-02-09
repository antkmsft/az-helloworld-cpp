cmake_minimum_required(VERSION 3.27)
project(az-helloworld-cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)

find_package(azure-core-cpp REQUIRED) # <-- We should fix it, so it is not necessary. Having "find_package(azure-storage-blobs-cpp REQUIRED)" should be sufficient for azure-core-cpp dependency to also be introduced. I think it worked this way at some time, but seems to be broken now.
find_package(azure-storage-blobs-cpp REQUIRED)
find_package(azure-identity-cpp REQUIRED)

add_executable(az-helloworld-cpp main.cpp)

target_link_libraries(az-helloworld-cpp PUBLIC Azure::azure-storage-blobs Azure::azure-identity)
