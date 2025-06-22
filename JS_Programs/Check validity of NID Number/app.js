//Check the validity of NID Number 13 digit or 17 digit input from user.
//Exam taker: BUET; Recriuter: DESCO
let NID = parseInt(prompt('Enter a number: '));
let NIDNum = BigInt(NID);

function checkValidity(num){
    if(num>1000000000000)
    {
        console.log('valid');
    }
    else{
        console.log('Not valid');
    }
}

checkValidity(NIDNum);123456789
