
#include "mlx.h"

int	render_next_frame(void *YourStruct);

int	main(void)
{
	void	*mlx;

	mlx = mlx_init();
	mlx_new_window(mlx, 300, 300, "funciona");
	mlx_loop(mlx);
}
