


document.addEventListener('DOMContentLoaded', () => {

let div1 = document.createElement('div')
div1.id = 'firstDiv';
div1.innerText = 'test'
document.body.appendChild(div1);


let button1 = document.createElement('button');
button1.id = 'firstButton';
button1.innerText = 'Click ME';
button1.className = 'buttonClass';
document.body.appendChild(button1);

let input1 = document.createElement('input')
input1.placeholder = 'Enter Name';
document.body.appendChild(input1)

let ulList = document.createElement('ul')
ulList.id = 'unorder';
document.body.appendChild(ulList);















})