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
)
