# DAA_TA 3
## Aparna Jha
### Roll no : 4     Sec : A


### Aim 
Generate a random number “n” between [5-10], create a matrix of size nxn
Populate the locations with “0” and “1” [the self-loops should be avoided]

Write the program to check and declare:

a) Complete graph is cyclic
b) Part of the graph is cyclic
c) Write the cycle in terms of vertices.

Constraint: the cycle should be of minimum THREE vertices or MAXIMUM “n”
vertices.
The solution should provide information about all the cycles in the graph
[complete graph is cyclic or partial graphs are cyclic]


### Explanation of logic 

Here I have used DFS traversal to check for cyclic graphn in the matrix and the I have printed the graph path if the graph exists.

To detect if there is any cycle in the undirected graph or not, we will use the DFS traversal for the given graph. For every visited vertex v, when we have found any adjacent vertex u, such that u is already visited, and u is not the parent of vertex v. Then one cycle is detected. 

Approach :
Iterate over all the nodes of the graph and Keep a visited array visited[] to track the visited nodes.

Run a Depth First Traversal on the given subgraph connected to the current node and pass the parent of the current node. In each recursive

  Set visited[root] as 1.
  
  Iterate over all adjacent nodes of the current node in the adjacency list 
  
    If it is not visited then run DFS on that node and return true if it returns true.
    
    Else if the adjacent node is visited and not the parent of the current node then return true.
    
Print the cycle.

Return false.

### Test cases : 

### case 1 : 
V = 5 
Matrix : int arr[][V] = { {0, 1, 0, 0, 0},
                     {1, 0, 1, 0, 1}, 
                     {0, 1, 0, 1, 0}, 
                     {0, 0, 1, 0, 1}, 
                     {0, 1, 0, 1, 0} };
                     
Output : Some Part of graph is cyclic.
         The Cyclic path is:-> 1 -> 2 -> 3 -> 4 -> 1  
         ![Screenshot (244)](https://user-images.githubusercontent.com/108869232/204011569-43d6b5b8-c96c-4ed2-81f8-7360311165c3.png)


 ### case 2 : 
 V= 5
 int arr[][V] = { {0, 1, 1, 0, 0},
                     {1, 0, 1, 1, 0}, 
                     {0, 1, 0, 0, 1}, 
                     {0, 1, 0, 0, 0}, 
                     {0, 0, 1, 0, 0} };

Output :  Some Part of graph is cyclic.
          The Cyclic path is :-> 1 -> 2 -> 3 -> 1
          ![Screenshot (245)](https://user-images.githubusercontent.com/108869232/204018879-6b2be6b8-8e25-4206-8a9e-10e9da195312.png)

### case 3 :
V = 4 
int arr[][V] = { {0, 1, 0, 1,},
                     {1, 0, 1, 0,}, 
                     {1, 1, 0, 0,}, 
                     {0, 0, 1, 0,} };
                     
Output :  Complete graph is cyclic.
          The Cyclic path is:
          -> 1 -> 4 -> 3 -> 2 -> 1
          ![Screenshot (246)](https://user-images.githubusercontent.com/108869232/204020279-c5906448-7837-4ff3-916e-fe9e754b97b7.png)
### case 4 :
V = 3
int arr[][V] = { {0, 1, 1, },
                     {1, 0, 1, }, 
                     {1, 1, 0, } }; 

Output : Complete graph is cyclic.
         The Cyclic path is:
         -> 1 -> 2 -> 3 -> 1
          ![Screenshot (247)](https://user-images.githubusercontent.com/108869232/204021381-206edd72-009f-444f-89d3-f94f4844cc41.png)
          
### case 5 : 
V = 3
int arr[][V] = { {0, 1, 0, },
                     {0, 0, 0, }, 
                     {0, 1, 0, } }; 

Output : No Graph. The Matrix contains Contains No cycle.
         ![Screenshot (248)](https://user-images.githubusercontent.com/108869232/204022539-5f45dfa0-ae60-455e-86d2-d850f48a1937.png)
         
         
### Real life Applications :
Road construction and connection.

Route optimization in delivery services.

Satellite positioning.


         
         
 

