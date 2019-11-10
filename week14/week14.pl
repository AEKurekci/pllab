use strict;
use warnings;

print "type q or quit to exit\n";
print "Enter your input:";
my $input = <>;
chomp $input;

my $regex ='[A-Z]\d*';
#2'^[A-Z]+$'; 
#1 '^\s*$';
$regex='^\d+\.\d+$';
$regex='^(\d{1,3}\.){3}\d{1,3}$';
until(($input eq "quit")||($input eq "q")) {
	if($input =~ /$regex/) { print "ACCEPTED\n"; }
	else { print "FAILED\n";}
	print "type q or quit to exit\n";
	print "Enter your input:";
	$input = <>;
	chomp $input;
}
