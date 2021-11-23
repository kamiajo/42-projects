#include "get_next_line.h"

int	main(void)
{
	char 	*line;
	int		fd;

	fd = open("text.txt", O_RDONLY);
	line = get_next_line(fd);
	printf("%s\n", line);
	free(line);
	line = NULL;
	line = get_next_line(fd);
	printf("%s\n", line);
	free(line);
	line = NULL;
	line = get_next_line(fd);
	printf("%s\n", line);
	free(line);
	line = NULL;
    line = get_next_line(fd);
    printf("%s\n", line);
    free(line);
    line = NULL;

} 
