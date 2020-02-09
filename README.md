A common introductory object-oriented programming exercise is to write a matrix arithmetic program. Feeling ambitious, and thinking it to be a great way to practice pointer manipulation in C++, I thought I might generalize this to a general tensor arithmetic program: have the objects start out as empty pointers to arrays of the proper type, and define their dimensions later.

Matrix addition is up; I just need to work on output and matrix multiplication, and I will have something for matrix arithmetic. From there, I plan to redefine matrix multiplication in a form that more closely resembles the Einstein summation convention, namely Matrix1[i, j]Matrix2[j, k], where the repeated j indicates summation over this index. From here, it should be a simple matter to generalize to tensor operations. Of course, I don't plan to distinguish between covariant and contravariant indices; but if an index appears three or more times, this will result in an error.

# Tensors
