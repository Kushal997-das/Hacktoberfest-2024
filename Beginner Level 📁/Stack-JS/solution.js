class Stack {
    constructor() {
        this.items = [];
    }

    // Push an element onto the stack
    push(element) {
        this.items.push(element);
    }

    // Pop an element from the stack
    pop() {
        if (this.isEmpty()) {
            return "Underflow"; // If stack is empty
        }
        return this.items.pop();
    }

    // Peek at the top element of the stack
    peek() {
        if (this.isEmpty()) {
            return "Stack is empty";
        }
        return this.items[this.items.length - 1];
    }

    // Check if the stack is empty
    isEmpty() {
        return this.items.length === 0;
    }

    // Print the stack
    printStack() {
        return this.items.join(" ");
    }
}

// Example usage
const stack = new Stack();
stack.push(10);
stack.push(20);
stack.push(30);
console.log("Stack:", stack.printStack());

console.log("Top element:", stack.peek());

console.log("Removing top element:", stack.pop());
console.log("Stack after popping:", stack.printStack());

console.log("Is stack empty?", stack.isEmpty());
