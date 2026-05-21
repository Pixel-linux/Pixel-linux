#!/bin/bash

# Code by NixxLTE -w-

sudo apt update

YoN="false"
read -p "Are you sure you want to update the system? [Y/N] " value

case "$value" in
    y|Y|yes|Yes|YES)
        echo "Updating Pixel/Linux..."
        sudo apt install nala # I know, it doesnt make any sense to have it here, its just to make sure you have the Nala installed
        YoN="true"
        ;;
    n|N|yes|Yes|YES)
        echo "Canceling."
        exit # exits the update process
        ;;
    *)
        echo "Invalid answer. ignoring..."
        YoN="false"
        ;;
esac

if [ "$YoN" = "true" ]; then # If you type yes, it will skip the apt-get upgrade confirmation
    sudo apt upgrade -y
elif [ "$YoN" = "false" ]; then # If you type an invalid answer (such as a), it will NOT skip the apt-get upgrade confirmation
    sudo apt upgrade
fi # If you type and invalid answer, it will just upgrade the system, and dont do anything else.