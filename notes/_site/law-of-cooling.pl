print "#h 0.7 lx \"Time (min)\" ly \"Temp (deg C)\" y 40 100\n";

$dt=0.01;
$i=0;
$T=100;
$Te=50;
$k=0.1;
print "#cm 2\n";
for ($t=0; $t<20; $t+=$dt)
{
  if (int($i/20)%2==0)
  {
    print "$t $T\n";
  }
  else
  {
    print "#\n";
  }
  $T-=$k*($T-$Te)*$dt;
  $i++;
}

print "#m 2 cm 1\n";
print "0 50\n20 50\n";
