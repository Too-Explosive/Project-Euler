var f1 = 1;
var f2 = 1;
var sum = 0;
while (f2 < 4000000)
{
  let x = f1 + f2;
  f1 = f2;
  f2 = x;
  if (f2 % 2 == 0)
    sum = sum + f2;
}
console.log(sum)
