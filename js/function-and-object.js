/*
*in javascript, construct function should use var instead of let,let us look the example
*/

var Flock = function(n){
  this.seagulls = n;
}

var instanceOfFlock = new Flock(7);    //you should use new keyword to instance a object
console.log(typeof(instanceOfFlock));  //now it is a object ---> object
console.log(instanceOfFlock.seagulls);   //seagulls is a property of this object ----> 7
console.log(typeof(Flock));   //Flock is a function,construct functino   ------> function


let Flock = n => this.seagulls = n;   //use arrow function, it can not build a construct function
var instanceOfFlock = new Flock(7);    //if you instance it, it will be error

console.log(typeof(Flock));   //Flock is a function,but not a construct functino   ------> function


