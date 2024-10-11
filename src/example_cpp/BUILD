cc_binary(
  name = "hello_world_cpp",
  srcs = ["hello_world.cpp"],
  deps = [":hello_lib"],  # Link against the C++ library
  visibility = ["//visibility:public"],  # Make this target public
)

cc_library(
  name = "hello_lib",
  srcs = ["hello_lib.cpp"],
  hdrs = ["hello_lib.h"],
  visibility = ["//visibility:public"]
  # You can set the visibility to a whole package or project if you are compiling your library in one project and you need to use it on another.
  # E.g: visibility = ["//main:__pkg__"] (sets the library visible to the whole 'main' package)
)

cc_test(
  name = "test_hello",
  srcs = ["test_hello.cpp"],
  copts = [
    "-Iexternal/gtest/googletest/include",
    "-Iexternal/gtest/googletest",
  ],
  deps = [
      "@googletest//:gtest_main",
      ":hello_lib",
  ],
  visibility = ["//visibility:public"]
)

# You can include multiple files in a single target with glob
# cc_library(
#     name = "build-all-the-files",
#     srcs = glob(["*.cc"]),
#     hdrs = glob(["*.h"]),
# )
