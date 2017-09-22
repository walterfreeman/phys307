print "#h 0.7 lx \"Time (min)\" ly \"Temp (deg C)\" y 40 100\n";

$steps=shift;

$dt=1;
$i=0;
$T=100;
$Te=50;
$k=0.5;

print "#m 2 cm 1\n";
print "0 50\n10 50\n";

print "#m 1 cm 0\n";
$t=0;
for ($i=0; $i<$steps; $i++)
{
  $temp[$i]=$T;
  $time[$i]=$t;
  print "$t $T \"\\oc\"\n";
  printf "%e %e\n%e %e\n#\n",$time[$i],$temp[$i],$time[$i-1],$temp[$i-1] if $i>0;  
  $Thalf = $T - $k*($T-$Te)*$dt/2;
  $T-=$k*($Thalf-$Te)*$dt;
  $t+=$dt;
  $temp[$i+1]=$T;
  $time[$i+1]=$t;
}
  printf "%e %e\n%e %e\n#\n",$time[$i],$temp[$i],$time[$i-1],$temp[$i-1] if $i>0;
  print "$t $T \"\\oc\"\n";
  printf "#m 2 cm 3\n%e %e\n %e %e\n#m 1 cm 0\n",$t,$T,$t+2,$T+2*(-$k*($T-$Te));
 
  $Thalf = $T - $k*($T-$Te)*$dt/2;

  printf "%e %e \"\\sq\"\n",$t+$dt/2,$Thalf;

  printf "#m 3 cm 2\n%e %e\n %e %e\n#m 1 cm 0\n",$t,$T,$t+2,$T+2*(-$k*($Thalf-$Te));
exit;
$dt=0.01; $T=100;
print "#cm 2\n";
for ($t=0; $t<10; $t+=$dt)
{
  if (int($i/10)%2==0)
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

