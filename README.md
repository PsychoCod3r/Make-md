### Introduction:

This is just a small collection of tiny programs and scripts
that I wrote to format the output of the scripts in [my R
repository](https://github.com/PsychoCod3r/R) so that it's in a neat
Markdown format. I used this script collection along with the R scripts
to generate the Twitter analysis documents in my Deep Web repo (which no
one but me can see because it's on the Deep Web). Just uploading the code
here on the off-chance that someone else finds it interesting or
useful. My main concern when creating this repo was that the output of
the scripts in my R repo just isn't particularly nice to look at. That's
all. :P

---------------------------------------------------------------------------

### Installation and usage instructions:

Run the following commands in the Make-md folder:

`gcc -o condense condense.c`

`gcc -o double-newlines double-newlines.c`

`gcc -o unix2dos unix2dos.c`

To use with an R script that produces an ordered data set:

(e.g. [link-clicks.r](https://github.com/PsychoCod3r/R/blob/main/link-clicks.r) and [engagement-rate.r](https://github.com/PsychoCod3r/R/blob/main/engagement-rate.r))

`source run-r-rank.sh r-script.r csv-file.csv > output.md`

To use with an R script that produces multiple data sets:

(e.g. [tweet-engagement.r](https://github.com/PsychoCod3r/R/blob/main/tweet-engagement.r) and [median.r](https://github.com/PsychoCod3r/R/blob/main/median.r))

`source run-r-multiset.sh r-script.r csv-file.csv > output.md`
