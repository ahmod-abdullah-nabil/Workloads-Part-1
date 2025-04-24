import random

print("Hi! I'm Luna's Mama, your virtual assistant.")
print("I can help you with various tasks. Just ask me anything!")
print("For example, you can ask me to tell you a joke, give you a recipe, or even help you with your homework.")
print("What would you like to know?")
print("You can also type 'exit' to end the conversation.")
print("Let's get started!")
print("Please enter your name:")
name = input()
print(f"Hello, {name}! I'm here to assist you.")

while True:
    print("\nHow can I help you? (e.g., 'joke', 'recipe', 'homework', or 'exit')")
    user_input = input().lower()

    if user_input == "exit":
        print(f"Goodbye, {name}! Have a great day!")
        break
    elif user_input == "joke":
        jokes = [
            "Why don't scientists trust atoms? Because they make up everything!",
            "Why did the scarecrow win an award? Because he was outstanding in his field!",
            "Why don't skeletons fight each other? They don't have the guts!"
        ]
        print(random.choice(jokes))
    elif user_input == "recipe":
        print("Here's a simple recipe for pancakes:")
        print("1. Mix 1 cup of flour, 1 egg, 1 cup of milk, and a pinch of salt.")
        print("2. Heat a non-stick pan and pour a ladle of batter.")
        print("3. Cook until bubbles form, then flip and cook the other side.")
        print("4. Serve with syrup or your favorite toppings!")
    elif user_input == "homework":
        print("I'm here to help! What subject or topic do you need help with?")
        topic = input()
        print(
            f"Let me find some resources or tips for {topic}. (This feature is under development!)")
    else:
        print("I'm sorry, I didn't understand that. Please try asking for 'joke', 'recipe', 'homework', or type 'exit' to quit.")
