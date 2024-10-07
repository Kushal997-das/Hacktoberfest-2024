class Calculator {
    input: number;
    constructor(input:number){
        this.input = input;
    }

    addNumber(num:number){
        return this.input + num;
    }
    subtractNumber(num:number){
        return this.input - num;
    }
    multiplyNumber(num:number){
        return this.input * num;
    }
    divideNumber(num:number){
        return this.input / num;
    }
    squareNumber(){
        return this.input * this.input;
    }
    cubeNumber(){
        return this.input * this.input * this.input;
    }
    findSqRoot(){
        return Math.sqrt(this.input);
    }
    findCubeRoot(){
        return Math.cbrt(this.input);
    }

}

let myCalc = new Calculator(125);
console.log(myCalc.findCubeRoot());