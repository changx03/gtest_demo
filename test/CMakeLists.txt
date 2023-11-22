add_executable(hello_test
  hello_test.cpp
)
target_link_libraries(hello_test
  GTest::gtest_main
)

add_executable(sample_test
  sample_test.cpp
)
target_include_directories(sample_test 
  PUBLIC ${CMAKE_SOURCE_DIR}/src
)
target_link_libraries(sample_test
    Sample
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(hello_test)
gtest_discover_tests(sample_test)

# gtest_add_tests(TARGET      hello_test
#                 # TEST_SUFFIX .noArgs
#                 TEST_LIST   HelloTest
# )
# gtest_add_tests(TARGET      sample_test
#                 # EXTRA_ARGS  --someArg someValue
#                 # TEST_SUFFIX .withArgs
#                 TEST_LIST   TestSamples
# )
