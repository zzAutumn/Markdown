
/*
* Record some elegant function code
*
/

//ABSTRACTING REPETITION
////////// normal way ///////
for (let i = 0; i < 10; i++){
  console.log(i);
}

function repeatLog(n){
  for (let i = 0; i < n; i++){
    console.log(i);
  }
}

function repeat(n,action){
  for (let i = 0; i < n; i++){
    action(i);
  }
}

repeat(3,console.log);
// -> 0
// -> 1
// -> 2

/////////elegant way /////////

let labels = [];
repeat(3, i => {
  labels.push(`Unit ${i + 1}`);
});

// -> ['Unit 1','Unit 2','Unit 3']
