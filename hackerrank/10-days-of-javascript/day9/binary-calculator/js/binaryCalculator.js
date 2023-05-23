const res = document.createElement('div'); res.id='res';
const btns = document.createElement('div'); btns.id='btns';

/* divs to body */
document.body.append(res);
document.body.append(btns);

/* buttons */
const btn0 = document.createElement('button'); btn0.innerHTML=0; btn0.id='btn0';
const btn1 = document.createElement('button'); btn1.innerHTML=1; btn1.id='btn1';
const btnClr = document.createElement('button'); btnClr.innerHTML='C'; btnClr.id='btnClr';
const btnEql = document.createElement('button'); btnEql.id='btnEql'; btnEql.innerHTML='=';
const btnSum = document.createElement('button'); btnSum.id='btnSum'; btnSum.innerHTML='+';
const btnSub = document.createElement('button'); btnSub.id='btnSub'; btnSub.innerHTML='-';
const btnMul = document.createElement('button'); btnMul.id='btnMul'; btnMul.innerHTML='*';
const btnDiv = document.createElement('button'); btnDiv.id='btnDiv'; btnDiv.innerHTML='/';

/* add buttons to btns div */
btns.appendChild(btn0);
btns.appendChild(btn1);
btns.appendChild(btnClr);
btns.appendChild(btnEql);
btns.appendChild(btnSum);
btns.appendChild(btnSub);
btns.appendChild(btnMul);
btns.appendChild(btnDiv);
/*=============================== END ELEMENTS ======================================*/

btn1.onclick =  () => res.innerHTML += '1';
btn0.onclick = () => res.innerHTML += '0';
btnSum.onclick = () => res.innerHTML += '+';
btnSub.onclick = () => res.innerHTML += '-';
btnMul.onclick = () => res.innerHTML += '*';
btnDiv.onclick = () => res.innerHTML += '/';
btnClr.onclick = () => res.innerHTML = '';


function isOperator(){
	const ck = res.innerHTML.endsWith('+') || res.innerHTML.endsWith('-') || res.innerHTML.endsWith('*') || res.innerHTML.endsWith('/');
	if (ck) return true;
}

btnEql.onclick = function () {
	if(!isOperator()) {
	  let re = /\d+/g; let re2 = /[\+\-\*\/]+/g
	  let numbers = res.innerHTML.match(re);; let operations = res.innerHTML.match(re2);
	  
	  while(operations.length>0) {
	    if(operations.includes('*')) {
	      let indexOfMul = operations.indexOf('*');
	      let mul = ( indexOfMul!=0 ? parseInt(numbers[indexOfMul-1],2) : parseInt(numbers[indexOfMul],2) ) * parseInt(numbers[indexOfMul+1],2);
	      numbers.splice(indexOfMul,2);
	      numbers.splice(indexOfMul,0,mul.toString(2));
	      operations.splice(indexOfMul,1);
	    } else if (operations.includes('/')) {
	      let indexOfDiv = operations.indexOf('/');
	      let division = ( indexOfDiv!=0 ? parseInt(numbers[indexOfDiv-1],2) : parseInt(numbers[indexOfDiv],2) ) / parseInt(numbers[indexOfDiv+1],2);
	      numbers.splice(indexOfDiv,2);
	      numbers.splice(indexOfDiv,0,division.toString(2));
	      operations.splice(indexOfDiv,1);
	    } else if (operations.includes('+')) {
	      let indexOfSum = operations.indexOf('+');
	      let sum = ( indexOfSum!=0 ? parseInt(numbers[indexOfSum-1],2) : parseInt(numbers[indexOfSum],2) ) + parseInt(numbers[indexOfSum+1],2);
	      numbers.splice(indexOfSum,2);
	      numbers.splice(indexOfSum,0,sum.toString(2));
	      operations.splice(indexOfSum,1);
	    } else {
	      let indexOfSub = operations.indexOf('-');
	      let sub = ( indexOfSub!=0 ? parseInt(numbers[indexOfSub-1],2) : parseInt(numbers[indexOfSub],2) )- parseInt(numbers[indexOfSub+1],2);
	      numbers.splice(indexOfSub,2);
	      numbers.splice(indexOfSub,0,sub.toString(2));
	      operations.splice(indexOfSub,1);
	    }  
	  }
	  res.innerHTML = numbers[0].toString(2);
	} else {
	  alert("Line must ends with number.")
	}
}
