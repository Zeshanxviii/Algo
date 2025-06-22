class Node {
    constructor(data) {
        this.data = data;
        this.next = null;
    }
}

class LinkedList {
    constructor() {
        this.head = null;
    }

    insertAtEnd(data) {
        const newNode = new Node(data);
        if (!this.head)
            this.head = newNode
        else {
            let current = this.head;
            while (current.next !== null) {
                current = current.next;
            }
            current.next = newNode;
        }
    }

    traversal() {
        let add = this.head;
        while (add !== null) {
            console.log(add.data);
            add = add.next;
        }
    }

    deletionTargetEle(target) {
        let pointor = this.head
        while(pointor !== null)
        {
            if(pointor.data == target)
            {
                
            }
            pointor = pointor.next;
        }
    }
}

const LinkList = new LinkedList()
LinkList.insertAtEnd(1)
LinkList.insertAtEnd(2)
LinkList.insertAtEnd(3)
LinkList.insertAtEnd(4)
LinkList.insertAtEnd(5)

LinkList.traversal()

