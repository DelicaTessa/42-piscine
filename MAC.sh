#!/bin/sh
ifconfig | grep -v '\-eth'| grep ether| sed 's/ether//g' | tr ' ' '/n' | cut -d '/' -f 2
