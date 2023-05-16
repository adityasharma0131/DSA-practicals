
class Node:  
    def __init__(self,data):  
        self.data = data;  
        self.previous = None;  
        self.next = None;  
          
class SortList:  

    def __init__(self):  
        self.head = None;  
        self.tail = None;  
          

    def addNode(self, data):  
        
        newNode = Node(data);  
          
        
        if(self.head == None):  
        
            self.head = self.tail = newNode;  
        
            self.head.previous = None;  
        
            self.tail.next = None;  
        else:  
        
            self.tail.next = newNode;  
        
            newNode.previous = self.tail;  
        
            self.tail = newNode;  
        
            self.tail.next = None;  
              
    
    def sortList(self):  
    
        if(self.head == None):  
            return;  
        else:  
    
            current = self.head  
            while(current.next != None):  
    
                index = current.next;  
                while(index != None):  
    
                    if(current.data > index.data):  
                        temp = current.data;  
                        current.data = index.data;  
                        index.data = temp;  
                    index = index.next  
                current = current.next  
                  
    
    def display(self):  
    
        current = self.head;  
        if(self.head == None):  
            print("List is empty");  
            return;  
        while(current != None):  
    
            print(current.data),  
            current = current.next;  
              
        print();  
          
dList = SortList();  

dList.addNode(7);  
dList.addNode(1);  
dList.addNode(4);  
dList.addNode(5);  
dList.addNode(2);  
   

print("Original list: ");  
dList.display();  
   

dList.sortList();  
   

  
print("Sorted list: ");  
dList.display();
