py_binary(
  name = "hello_world_py",
  srcs = ["hello_world.py"],  # Specify the source file
  main = "hello_world.py",
  # Explicitly set the entry point for Bazel to find it (by default it tries to find <name>.py, so if you don't add the main it
  # will look for hello_world_py.py which is not what we want)
)

py_library(
    name = "hello_lib",
    srcs = ["hello_lib.py"],
    visibility = ["//visibility:public"],  # Make the library available to other targets
)
