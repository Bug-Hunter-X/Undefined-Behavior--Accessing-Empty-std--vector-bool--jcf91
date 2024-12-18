# Undefined Behavior: Accessing Empty std::vector<bool>

This repository demonstrates a common C++ error: accessing elements of an empty `std::vector<bool>` without proper error handling.  The code showcases two approaches: using the subscript operator (`[]`), which leads to undefined behavior if the vector is empty, and using the `at()` method, which throws an exception in the same scenario.  The solution provides a safe way to access elements, always checking for emptiness first.

## Bug

The `bug.cpp` file contains code that attempts to access the first element of a `std::vector<bool>` without checking if it is empty.  This can result in unpredictable behavior or crashes. 

## Solution

The `bugSolution.cpp` file shows a corrected version of the code, which first verifies the vector's size before attempting any access. This prevents the undefined behavior or exception.