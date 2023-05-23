class Node:
    def __init__(self,data):
        self.data = data
        self.next = None 


class Solution: 

    def display(self,head):
        current = head
        while current:
            print(current.data,end=' ')
            current = current.next

    def insert(self,head,data):
        node = Node(data) 
        if head == None: return node
        if head.next == None:
            head.next = node
            return head
        itr = head
        while True:
            if itr.next == None: break
            itr = itr.next
        itr.next = node
        return head


mylist= Solution()
T=int(input())
head=None
for i in range(T):
    data=int(input())
    head=mylist.insert(head,data)    
mylist.display(head); 	  
