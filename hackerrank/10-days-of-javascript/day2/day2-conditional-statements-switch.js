'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });
    
    main();    
});

function readLine() {
    return inputString[currentLine++];
}

function getLetter(s) {
    const A = ['a', 'e', 'i', 'o', 'u'];
    const B = ['b', 'c', 'd', 'f', 'g'];
    const C = ['h', 'j', 'k', 'l', 'm'];
    const D = ['n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z']
    const first_char = s[0];

    if ( A.indexOf(first_char) != -1 ) return 'A';
    if ( B.indexOf(first_char) != -1 ) return 'B';
    if ( C.indexOf(first_char) != -1 ) return 'C';
    if ( D.indexOf(first_char) != -1 ) return 'D';
}


function main() {
    const s = readLine();
    
    console.log(getLetter(s));
}

