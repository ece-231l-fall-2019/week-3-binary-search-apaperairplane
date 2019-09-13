## RESULTS

# Before Optimizations
---------------------------------
|Algorithm        |Time Taken   |
|-----------------|-------------|
|Linear           |2.56788s     |
|Linear (pointers)|1.68575s     |
|Binary           |0.000583588s |
|Binary (pointers)|0.000581479s |
---------------------------------
# After Optimizations
---------------------------------
|Algorithm        |Time Taken   |
|-----------------|-------------|
|Linear           |1.44601s     |
|Linear (pointers)|1.09038s     |
|Binary           |0.000419464s |
|Binary (pointers)|0.000458268s |
---------------------------------

## SUMMARY

  Overall, it seems that the binary search function cut down on time significantly. Even before optimizations binary search 
  barely took any time at all to execute. Without optimizations and without using pointers the linear search took 2.6 seconds 
  compared to the binary search which only took 0.001 seconds. I suppose it could be that with every iteration of 'i' the code 
  essentially makes a copy of the values within the loop. That doesn't happen within binary search as it only copies the values 
  of the ends with each iteration. In the end, there stood a significant difference between binary and linear but theres also another 
  odd consistency.
  
  Comparing the values between linear and it's pointer counterpart seem to have much more of a difference compared to binary and it's 
  pointer counterpart. The difference between the linear functions is much greater than that of the binary functions, even after 
  optimization. Oddly enough, after optimization binary search became more efficient than binary search with pointers. But the 
  significance of the difference between the two could lie with the amount of memory they take up. Since linear searh makes a copy 
  of each value with each iteration, it could be that it is much more efficient since instead of copying the value they are simply 
  pointers and point to the next value. With binary search that doesn't happen because the amount of copied data is already 
  significantly lower than that of the linear functions. As to why it becomes more efficient than with copied data is a question 
  that I'm not sure I'm qualified to answer.
