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

/*
 * Complete the vowelsAndConsonants function.
 * Print your output using 'console.log()'.
 */
function vowelsAndConsonants(str) {
    const v = [];
    const c = [];
    const vowels = ['a', 'e', 'i', 'o', 'u']

    for ( let i = 0; i < str.length; i++ ) {
        if ( vowels.indexOf(str[i]) != -1 ) {
            v.push(str[i]);
        } else {
            c.push(str[i]);
        }
    }

    v.forEach(el => console.log(el));
    c.forEach(el => console.log(el));
}


function main() {
    const s = readLine();   
    vowelsAndConsonants(s);
}
