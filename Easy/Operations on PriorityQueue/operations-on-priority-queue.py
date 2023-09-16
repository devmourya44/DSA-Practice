
# Helper class Geeks to implement 
# insert() and findFrequency()
class Geeks:
    
     # Function to insert element into the queue
    def insert(self, q, k):
        q.append(k)
    
    # Function to find an element k
    def find(self, q, k):
        return 1 if k in q else 0
        
    
    # Function to delete the max element from queue
    def delete(self, q):
        largest = max(q)
        q.remove(largest)

        return largest   


#{ 
 # Driver Code Starts
import heapq

# Driver class with driver code
if __name__ == '__main__':
    # Taking input using input() method
    testcase = int(input())
    
    while testcase > 0:
        # Priority Queue with comparator
        p_queue = []
        
        n = int(input())
        
        # Invoking object of Geeks class
        obj = Geeks()
        
        elements = list(map(int, input().split()))
        for i in range(n):
            obj.insert(p_queue, elements[i])
        
        # Taking total number of queries
        x = int(input())
        lst = list(map(int, input().split()))
        
        # If the element entered is present 
        # in the PriorityQueue then we print
        # "1" and delete the maximum element
        # else we print "-1"
        for i in range(x):
            k = lst[i]
            f = obj.find(p_queue, k)
            if f:
                print("1")
                print(obj.delete(p_queue))
            else:
                print("-1")
        
        testcase -= 1

# } Driver Code Ends