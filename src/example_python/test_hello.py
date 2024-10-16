import pytest
import sys
from hello_lib import greet_someone

def test_greet():
    assert greet_someone("Jesus") == "Hello, Jesus!"

# if __name__ == "__main__":
#     sys.exit(pytest.main(sys.argv[1:]))
