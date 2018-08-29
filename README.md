# Queue-Reconstruction-by-Height

问题：给定一个vector，元素为pair。学习关于pair的用法。

思路明了，可是不会使用vector骚操作，记录一波。
首先使用sort排序，将数组排列为以first元素由大到小，second由小到大的顺序。这是需要编写排序函数。
auto cmp=[](pair<int,int>&p1,pair<int,int>&p2){return ...;};
vector::insert(pos,ele) 将元素ele插入到pos位置。
