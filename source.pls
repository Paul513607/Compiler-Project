var unInit : int;
var number : int = 2;
var string : Str = "plm";
var sized_string[12] : str;
var flt : Float = 2.0;
var ploua : Bool = true;
var array : arr;

fun foo : bool (var num : int = 2){
    if (num % 2 == 0) then
        {
            return true;
        }
    else {
        return false;
    }
}

var Complex : type {
    var real : int;
    var img : int;
}

var cmplex : Complex  = {1, 4};


for (var i : int = 10; )

while (number != 0) {
    var i : int;
    
    for(i = 10; i > 0; -1){
        number = number - 1;
    }
}

var nume[256] : string;

read(nume);
number = read(int)
sized_string = read(str[12])

print(nume);
print(nume + '\n')
print()         //prints '\n'

print(number + 1);
print(cmplex);      // expected output : {1, 4}
print("nr complex e " + complex);
