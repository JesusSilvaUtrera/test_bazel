# Using the BUILD on the root of the project, you can create alias. To be able to use the alias, the targets must be public
alias(
    name = "hello_cpp",
    actual = "//src/example_cpp:hello_world_cpp",
)

alias(
    name = "hello_py",
    actual = "//src/example_python:hello_world_py",
)

# alias are not working for test targets
