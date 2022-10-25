# Expects the executable called "main" to be in the same directory
# Needs the tool diff
# Will create a temporary file called tmpFindMotive.a7d371, tmpFindMotive.a7d372
# and tmpFindMotive.a7d373

# Input file
echo "Es gab einen Hut der hüttet sich vor
anderen Hüten. Man sagt auch Mut-Zum-Hut
Hut!
Ein verrückter kam und sagte
HutHuthut hut hUt hUT hutHUT hutHut!" > tmpFindMotive.a7d371

# Solution
echo "The file tmpFindMotive.a7d371 contains 5 words containing the motive Hut" > tmpFindMotive.a7d372

# Call
./main tmpFindMotive.a7d371 Hut > tmpFindMotive.a7d373

# Compare
rr=$(diff tmpFindMotive.a7d372 tmpFindMotive.a7d373)

if [[ -z $rr ]]
then
    echo "Passed simple test"
else
    echo "Failed for"
    echo "./main tmpFindMotive.a7d371 Hut"
    echo "Diff is"
    echo $rr
fi