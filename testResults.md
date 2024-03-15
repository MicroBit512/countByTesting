# Test Results

This document shows the test results for a few different functions.

## Hardware Running This Test

The hardware that these tests are running on is a HP-Z240 workstation.
Here are the specs of the HP-Z240:
- RAM > 8GB DDR4.
- CPU > Intel Xeon E-1240 v5 @ 3.5GHz.
- HardDisk > 1TB western digital.
- OS > Linux mint.

## What Did This Test Consist Of?

The unsigned n variable was set to 10000.
The int number variable was set to 10000000.
This is the command I used to compile: gcc countByX.c

## Test Results

Starting test accounting...
Test acounting has taken: S0 ns18847747
Test accounting will be subtracted from actual test results

Starting countByZero...
countByZero has taken: 205182690933 NanoSeconds

Starting countByOne...
countByOne has taken: 177735822862 Nanoseconds

Starting countByTwo...
countByTwo has taken: 215657184532 Nanoseconds

Starting countByThree...
countByThree has taken: 234678624360 Nanoseconds

## Notes

I did try the test with the -O3 flag passed to gcc, but gcc was doing some
optimizations that lead it to mess up the test results.
