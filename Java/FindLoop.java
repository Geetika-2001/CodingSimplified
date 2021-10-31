public class FindLoop {
    /* Linked list Node*/

public static class ListNode {
        int data;
        ListNode next;
        ListNode(int d)
        {
            data = d;
            next = null;
        }
    }
public static void isLoopPresent(ListNode nodeHead){

ListNode slowPointer,fastPointer;
         slowPointer = nodeHead;
         fastPointer = nodeHead;

//we will be using a flag to know if loop was found
boolean loopFound = false;

while(fastPointer != null){

    fastPointer = fastPointer.next;

    if(fastPointer != null){
        fastPointer = fastPointer.next;
        slowPointer = slowPointer.next;
    }


    if(fastPointer == slowPointer){
        loopFound = true;
        // we need to break otherwise it will go on forever
        break; 
    }
}

if(loopFound){
    System.out.println("Loop is Present");
}else{
    System.out.println("No Loop Found");
}
}
public static void main(String [] args){

    /*
    Creating a Linked List of eight nodes
    having a loop at (node 3)

    HEAD-->1-->2-->3-->4-->5
                   ^       |
                   |       v
                   8<--7<--6

    */

    // creating 8 independent nodes
    ListNode nodeOne = new ListNode(1);
    ListNode nodeTwo = new ListNode(2);
    ListNode nodeThree = new ListNode(3);
    ListNode nodeFour = new ListNode(4);
    ListNode nodeFive = new ListNode(5);
    ListNode nodeSix = new ListNode(6);
    ListNode nodeSeven = new ListNode(7);
    ListNode nodeEight = new ListNode(8);

    //Head node pointing to first node of linked list
    ListNode nodeHead = nodeOne;

    // creating a dependency in nodes by linking node to one another
    nodeOne.next = nodeTwo;
    nodeTwo.next = nodeThree;
    nodeThree.next = nodeFour;
    nodeFour.next = nodeFive;
    nodeFive.next = nodeSix;
    nodeSix.next = nodeSeven;
    nodeSeven.next = nodeEight;
    nodeEight.next = nodeThree; // this line creates the loop

    //calling method to evaluate
    isLoopPresent(nodeHead);
}
}

/*
    This code is taken from "https://www.codingninjas.com/blog/2020/09/09/floyds-cycle-detection-algorithm/".
*/