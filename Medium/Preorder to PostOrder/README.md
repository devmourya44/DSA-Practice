<h2><a href="https://practice.geeksforgeeks.org/problems/preorder-to-postorder4423/1?page=1&status[]=unsolved&category[]=Tree&sortBy=submissions">Preorder to PostOrder</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an array arr[] of N nodes representing preorder traversal of some BST. You have to build the exact PostOrder from the given given preorder traversal.&nbsp;<br>In Pre-Order traversal,&nbsp;<strong>the root node is visited before the left child and right child nodes</strong>.</span></p>
<p><strong><span style="font-size: 18px;">Example 1:</span></strong></p>
<pre><strong><span style="font-size: 18px;">Input:
</span></strong><span style="font-size: 18px;">N = 5
arr[]  = {40,30,35,80,100}
<strong>Output: </strong>35 30 100 80 40<strong>
Explanation:</strong>&nbsp;PreOrder: 40 30 35 80 100
Therefore, the BST will be:
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; 40
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;/&nbsp; &nbsp;&nbsp; &nbsp;\
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;30&nbsp; &nbsp; &nbsp; &nbsp;80
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;\&nbsp; &nbsp; &nbsp; &nbsp;&nbsp;\&nbsp; &nbsp;
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;35&nbsp; &nbsp; &nbsp; 100
Hence, the postOrder traversal will
be: 35 30 100 80 40</span></pre>
<p><strong><span style="font-size: 18px;">Example 2:</span></strong></p>
<pre><strong><span style="font-size: 18px;">Input:
</span></strong><span style="font-size: 18px;">N = 8
arr[]  = {40,30,32,35,80,90,100,120}
<strong>Output: </strong>35 32 30 120 100 90 80 40</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You need to complete the given function and<strong> return the root </strong>of the tree. The driver code will then use this root to print the post order traversal.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(N).<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(N).</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= N &lt;= 10<sup>3</sup><br>1 &lt;= arr[i] &lt;= 10<sup>4</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Flipkart</code>&nbsp;<code>Amazon</code>&nbsp;<code>Linkedin</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Stack</code>&nbsp;<code>Binary Search Tree</code>&nbsp;<code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;