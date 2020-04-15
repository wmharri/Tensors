# Tensors

A common introductory object-oriented programming exercise is to write a matrix arithmetic program. The aim of this project is to generalize this to a general tensor arithmetic library. My motivation for developing it was to practice pointer manipulation in C++. For a those unfamiliar with the object, a nice, short description can be at [MathWorld](https://mathworld.wolfram.com/EinsteinSummation.html).

## Currently Implemented

When instantiated, the objects start out as empty pointers to arrays of the proper numeric type, with their dimensions defined later. Matrix addition is functioning properly.

## To Be Implemented

It should be noted that this program is not yet a library. I will reshape it into that form after tensor arithmetic is implemented.

### Matrix Arithmetic

Once output and multiplication of matrices are finished, basic matrix arithmetic functionality will be complete. From there, I plan to redefine matrix multiplication in a form that more closely resembles the Einstein summation convention; and due to the use of the comma to indicate time differentiation, indices will be space-separated -- although since, for the time being, all tensors considered will be constant, this notation will be of no use herein, and I really don't feel like implementing rules for symbolic differentiation. Upper indices will be written first, followed by lower, and the division between them will be denoted by a semicolon. So, for example, a command for matrix multiplication may be written Matrix1\[i; j\]Matrix2\[j; k\].

### Tensor Arithmetic

Once matrix arithmetic is represented in the form described above, it should be a simple matter to generalize to tensor operations. If an index appears more than once either before or after the semicolon, this will result in an error. Once tensor arithmetic is finished, I will consider implementing tensors whose entries are functions -- though this will start out as polynomials, maybe even analytic functions, possibly even meromorphic functions, since these have a particularly simple differentiation formula.
