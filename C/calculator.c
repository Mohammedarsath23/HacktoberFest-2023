void Food() {
    if (food.x == 0) { // Initial spawn
        do {
            food.x = rand() % 70;
            food.y = rand() % 30;
        } while (food.x <= 10 || food.y <= 10 || is_food_on_snake(food)); // Check if food overlaps snake
    }
    // ... existing code
}

int is_food_on_snake(struct coordinate food) {
    for (int i = 0; i < length; i++) {
        if (body[i].x == food.x && body[i].y == food.y) {
            return 1; // Food is on the snake
        }
    }
    return 0; // Food is not on the snake
}
