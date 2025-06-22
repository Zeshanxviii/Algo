//@ts-ignore
class ListNode {
    data: number;
    next: typeof ListNode | null;
  
    constructor(data: number) {
      this.data = data;
      this.next = null;
    }
  }
  //@ts-ignore
  class LinkedList {
    head: ListNode | null;
  
    constructor() {
      this.head = null;
    }
  
  traversal(): void {
  let current = this.head;

  while (current !== null) {
    //@ts-ignore
    console.log(current.data);
    //@ts-ignore // ✅ Now TypeScript knows current is Node
    current = current.next;
  }
}
    insertAtEnd(data: number): void {
        //@ts-ignore
      const newNode = new ListNode(data);
  
      if (!this.head) {
        this.head = newNode;
      } else {
        let current: ListNode = this.head;
        //@ts-ignore
        while (current.next !== null) {
            //@ts-ignore
          current = current.next;
        }
        //@ts-ignore
        current.next = newNode;
      }
    }
  }
const Linklist = new LinkedList()
Linkedlist.insertAtEnd(8)
Linkedlist.insertAtEnd(7)
Linkedlist.insertAtEnd(6)
Linkedlist.traversal()