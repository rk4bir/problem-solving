const div = document.createElement('Div');
div.id = 'btns';
const buttons = [];

for ( let i=1; i<=9; i++ ) {
    let btn = document.createElement('Button');
    btn.id = 'btn' + i.toString();
    btn.innerHTML = i;
    div.appendChild(btn);
    buttons.push(btn);
}

document.body.append(div);
const btn5 = div.children.btn5

btn5.onclick = function () {
    var btn1 = buttons[0].innerHTML;
    buttons[0].innerHTML = buttons[3].innerHTML;
    buttons[3].innerHTML = buttons[6].innerHTML;
    buttons[6].innerHTML = buttons[7].innerHTML;
    buttons[7].innerHTML = buttons[8].innerHTML;
    buttons[8].innerHTML = buttons[5].innerHTML;
    buttons[5].innerHTML = buttons[2].innerHTML;
    buttons[2].innerHTML = buttons[1].innerHTML;
    buttons[1].innerHTML = btn1;
}

