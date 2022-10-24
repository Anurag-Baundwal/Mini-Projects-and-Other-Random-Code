Reference website - https://regexr.com/
Reference video - https://www.youtube.com/watch?v=rhzKDrUiJVk

* Regular expressions are enclosed within two forward slashes //

* After the forward slashes, we can have flags //igmuys
    i - case insensitive
    g - global
    m - multiline
    u - unicode
    y - sticky
    s - dotall

* ^indicates the beginning

* $indicates the end 

* multiline flag makes these the beginning and end of 
lines instead of the entire string being tested

* Quantifiers and alteration:
    +
    *
    {}
    ?
    ?

* Square brackets allow us to make sets []
    [aeoui] means any of a, e, i, o, or u
    [a-z] means anything in the range a to z

* Adding a ^ at the beginning of [] makes a negated set. 
    [^a-z] means not a lowercase alphabet

* Normal brackets () allow us to make groups