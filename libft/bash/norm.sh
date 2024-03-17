find . -type f ! -name "test.*.c" -name "*.c" -exec norminette {} +
find . -type f ! -name "test.*.c" -name "*.h" -exec norminette {} +

