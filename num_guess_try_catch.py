#!/usr/bin/env python3
# Created by: Remy Skelton
# Created on: Oct 15, 2023
# This program will ask the user
# for a number and will tell them
# if they guessed correctly while
# using a number generator and try catch
import random


def main():
    # Get the user guess as a string and display a message
    print("This program will ask the user for a number between 0 and 9 and")
    print("then it will display if they guessed correctly or not.")
    user_guess_as_string = input("Please enter your guess between 0 and 9: ")

    # Create a generator for correct_guess
    correct_guess = random.randint(0, 9)

    # Catch if the user input something wrong
    try:
        # Convert user guess as a string to int
        user_guess_as_int = int(user_guess_as_string)

        # Check if the user guess as int is equal to the correct guess
        if user_guess_as_int == correct_guess:
            # Display if the user is right
            print("\nCongratulations, that was the correct number")

        # Check if the user guess as int is not equal to the correct guess
        else:
            # Display if the user is wrong
            print("\nThe correct number was {}".format(correct_guess))

    # Display a message to the user if they entered something that is not valid
    except Exception:
        # Message for incorrect user input
        print("\n{} is not a valid input.".format(user_guess_as_string))


if __name__ == "__main__":
    main()
