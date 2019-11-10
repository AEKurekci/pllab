use strict;
use warnings;

my $x = "this is a string\n";
print $x;
$x=6;
print $x , "\n\n";
my @array=(" Ali ", 7 , 3.5);
print "length of the array= ";
my $length=@array;
print $length , "\n";
my ($firstElement)=@array;
print "first element= ";
print $firstElement, "\n";

my @array3=('one','two','three');
my ($a,$b,$c)=@array3;
print '$a,$b,$c', "\n";
print "$a$b$c","\n";

print @array, "\n";
print $array[2] ,"\n";
my @array2=([1,2,3],[4,5,6],[7,8,9]);
print $array2[2][1], "\n";
print $array2[1], "\n";#kullanılmaz
print @{$array2[1]}, "\n";

my %grades = ("Ali"=> 50 ,"Mehmet" => 75, "Ayşe" => 80 );
print $grades{"Ayşe"},"\n";

print $a.$b.$c,"\n";#concetenation
