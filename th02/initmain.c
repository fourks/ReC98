int game_init_main(void)
{
	if(mem_assign_dos(18000)) {
		return 1;
	}
	vram_planes_set();
	vsync_start();
	egc_start();
	graph_400line();
	pfkey = PF_KEY;
	pfstart(pf_fn);
	return 0;
}
