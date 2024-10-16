py_binary(
  name = "hello_world_py",
  srcs = ["hello_world.py"],  # Specify the source file
  main = "hello_world.py",
  # Explicitly set the entry point for Bazel to find it (by default it tries to find <name>.py, so if you don't add the main it
  # will look for hello_world_py.py which is not what we want)
  visibility = ["//visibility:public"],  # Make this target public
)

py_library(
    name = "hello_lib",
    srcs = ["hello_lib.py"],
    visibility = ["//visibility:public"],  # Make the library available to other targets
)

# Load the requirements installed on the root MODULE.bazel from 'pip_deps'
load("@pip_deps//:requirements.bzl", "requirement")
py_test(
    name = "test_hello",
    srcs = ["test_hello.py"],
    deps = [
        ":hello_lib",  # Dependency on your Python greet library
        requirement("pytest"),  # Add pytest as a dependency
    ],
)
