//@ts-ignore
var ListNode = /** @class */ (function () {
    function ListNode(data) {
        this.data = data;
        this.next = null;
    }
    return ListNode;
}());
//@ts-ignore
var LinkedList = /** @class */ (function () {
    function LinkedList() {
        this.head = null;
    }
    LinkedList.prototype.traversal = function () {
        var current = this.head;
        while (current !== null) {
            //@ts-ignore
            console.log(current.data);
            //@ts-ignore // ✅ Now TypeScript knows current is Node
            current = current.next;
        }
    };
    LinkedList.prototype.insertAtEnd = function (data) {
        //@ts-ignore
        var newNode = new ListNode(data);
        if (!this.head) {
            this.head = newNode;
        }
        else {
            var current = this.head;
            //@ts-ignore
            while (current.next !== null) {
                //@ts-ignore
                current = current.next;
            }
            //@ts-ignore
            current.next = newNode;
        }
    };
    return LinkedList;
}());
var Linklist = new LinkedList();
Linkedlist.insertAtEnd(8);
Linkedlist.insertAtEnd(7);
Linkedlist.insertAtEnd(6);
Linkedlist.traversal();
