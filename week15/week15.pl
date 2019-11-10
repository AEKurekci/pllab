use strict;
use warnings;

my $filename=$ARGV[0];

open OKU, '<',$filename or die "Can not open $filename!\n";
#<:read, >:write, >>:append (sona ekle)

my @lines=<OKU>;

close OKU;

foreach my $line (@lines){
    chomp $line;
    #print $line, "\n";

    if($line =~ /^(.*)\s+\-\s+\-\s+(\[.*\])\s+\".*\"\s+(\d{3})\s+(\d+)/){
    my $client=$1;
    my $time=$2;
    my $status=$3;
    my $dataSize=$4;

    print "$client\t$dataSize\t$time\t$status\n";
    }

}
