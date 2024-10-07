const isValid = function (s) {
    const stack = [];
    // let c -> means check that loop all openning and closing brackets
    for (let c of s) {
        // check in only opens here push stack
        if (c === "(" || c === "{" || c === "[") {
            stack.push(c);
        }
        else {

            if (!stack.length //if stack is not empty
                ||
                (c === ")" && stack[stack.length - 1] !== "(")
                ||
                (c === "}" && stack[stack.length - 1] !== "{")
                ||
                (c === "]" && stack[stack.length - 1] !== "[")
            ) {

                return false;
            }
            stack.pop();
        }
    }
    return !stack.length;
};
