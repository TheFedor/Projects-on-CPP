#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp> //SFML - ��� ���������� ����������� ����������� � �������� �������� �����, ��������������� � ������������ � ��������� �������� zlib / png.
#include <vector>
using namespace sf; //���������� ������������ ���� sf (���, �����, ����� ��� ��������� �����������?)

//����� ��� �������� �������� ��������
class Objects
{
public:
	Sprite background;
	Sprite settings_button;
	Sprite name_of_the_game;
	Sprite start_button;
	Sprite exit_button;
	Sprite settings_menu;
	Sprite background_selection;
	Sprite back;
	Sprite gro;
	Sprite und;
	Sprite a_d_vs_l_r;
	Sprite a_d;
	Sprite l_r;
	Sprite music_menu;
	Sprite what_music;
	Sprite game_level_selection;
	Sprite levels;
	Sprite placement_menu;
	Sprite plus_or_minus;
	Sprite if_a_equally_11;
	Sprite if_a_equally_1;
	Sprite what_a_size;
	Sprite player;
	Sprite ball;
	Sprite preparation_1;
	Sprite preparation_2;
	Sprite preparation_3;
	Sprite preparation_n;
	Sprite back_to_game_level_selection;
	Sprite out_of_game;
	Sprite you_won;
	Sprite block_1[21];
	Sprite block_2[52];
	Sprite block_3[220];
	Sprite block_4[500];
	Sprite block_5[2000];
	Sprite custom_level_menu;
	Sprite obvodka_block_4;
	Sprite obvodka_block_5;
	Sprite red_line;
	Sprite custom_level_button;
	Sprite player_ball_speed;
	Sprite delette;
	Sprite obvodka_delete;
	Sprite player_speed[20];
	Sprite ball_speed[20];
};

//����������� ����� ��� ��������� ���� ��� ��������� � ��� ��������
class Boolean
{
public:
	bool menu = true;
	bool settings = false;
	bool background_selection = false;
	bool background3 = true;
	bool background2 = false;
	bool background1 = false;
	bool a_d_vs_l_r = false;
	bool a_d = true;
	bool l_r = false;
	bool music_menu = false;
	bool game_level_selection = false;
	bool placement_menu = false;
	bool plus_or_minus = false;
	bool preparation_1 = false;
	bool preparation_2 = false;
	bool preparation_3 = false;
	bool preparation_n = false;
	bool play_1 = false;
	bool play_2 = false;
	bool play_3 = false;
	bool play_n;
	bool ballgo = false;
	bool you_won = false;
	bool custom_level = false;
	bool obvodka_block_4 = false;
	bool obvodka_block_5 = false;
	bool obvodka_delete = false;
};


int main()
{
	RenderWindow window(sf::VideoMode(1287, 600), "Arkanoid"); //RenderWindow.hpp - ������, ���������� �� ��������� ���� ���� ��������� ������� � �������� Arkanoid

	Objects obj;
	Boolean b;
	int what_size = 6;
	double pxpy = 1;
	double ballspeed = 0.2;
	double playerspeed = 0.3;
	int sch_ballspeed = 1;
	int sch_playerspeed = 2;
	double ballx = ballspeed;
	double bally = -1 * ballspeed;
	int playerlife = 1;
	int how_many_block_4 = 0;
	int how_many_block_5 = 0;
	std::vector<std::vector<float>> pos_block_4(2);
	std::vector<std::vector<float>> pos_block_5(2);


	Music music_one; // ������� ������ ������
	music_one.openFromFile("Release/music.wav");
	music_one.stop();
	music_one.setLoop(true);
	Music music_second;
	music_second.openFromFile("Release/music_boss.wav");
	music_second.play(); //play
	music_second.setLoop(true);


	//C:/Users/Admin/Desktop/arkanoid_kurs_rab/arkanoid_kurs_rab/Debug
	Texture textura_background_third;
	textura_background_third.loadFromFile("Release/background3.png");
	Texture textura_background_second;
	textura_background_second.loadFromFile("Release/background2.png");
	Texture textura_background_first;
	textura_background_first.loadFromFile("Release/background1.png");
	Texture textura_settings_button;
	textura_settings_button.loadFromFile("Release/settings_button.png");
	Texture textura_back;
	textura_back.loadFromFile("Release/back.png");
	Texture textura_gro;
	textura_gro.loadFromFile("Release/gro.png");
	Texture textura_und;
	textura_und.loadFromFile("Release/und.png");
	Texture textura_name_of_the_game;
	textura_name_of_the_game.loadFromFile("Release/name_of_the_game.png");
	Texture textura_start_button;
	textura_start_button.loadFromFile("Release/start_button.png");
	Texture textura_exit_button;
	textura_exit_button.loadFromFile("Release/exit_button.png");
	Texture textura_settings_menu;
	textura_settings_menu.loadFromFile("Release/settings_menu.png");
	Texture textura_background_selection;
	textura_background_selection.loadFromFile("Release/background_selection.png");
	Texture textura_a_d_vs_l_r;
	textura_a_d_vs_l_r.loadFromFile("Release/a_d_vs_l_r.png");
	Texture textura_a_d;
	textura_a_d.loadFromFile("Release/a_d.png");
	Texture textura_l_r;
	textura_l_r.loadFromFile("Release/l_r.png");
	Texture textura_music_menu;
	textura_music_menu.loadFromFile("Release/music_menu.png");
	Texture textura_what_music_1;
	textura_what_music_1.loadFromFile("Release/what_music_1.png");
	Texture textura_what_music_2;
	textura_what_music_2.loadFromFile("Release/what_music_2.png");
	Texture textura_what_music_3;
	textura_what_music_3.loadFromFile("Release/what_music_3.png");
	Texture textura_game_level_selection;
	textura_game_level_selection.loadFromFile("Release/game_level_selection.png");
	Texture textura_levels;
	textura_levels.loadFromFile("Release/levels.png");
	Texture textura_placement_menu;
	textura_placement_menu.loadFromFile("Release/placement_menu.png");
	Texture textura_plus_or_minus;
	textura_plus_or_minus.loadFromFile("Release/plus_or_minus.png");
	Texture textura_if_a_equally_11;
	textura_if_a_equally_11.loadFromFile("Release/if_a_equally_11.png");
	Texture textura_if_a_equally_1;
	textura_if_a_equally_1.loadFromFile("Release/if_a_equally_1.png");
	Texture textura_a_0_5;
	textura_a_0_5.loadFromFile("Release/a_0_5.png");
	Texture textura_a_0_6;
	textura_a_0_6.loadFromFile("Release/a_0_6.png");
	Texture textura_a_0_7;
	textura_a_0_7.loadFromFile("Release/a_0_7.png");
	Texture textura_a_0_8;
	textura_a_0_8.loadFromFile("Release/a_0_8.png");
	Texture textura_a_0_9;
	textura_a_0_9.loadFromFile("Release/a_0_9.png");
	Texture textura_a_1_0;
	textura_a_1_0.loadFromFile("Release/a_1_0.png");
	Texture textura_a_1_1;
	textura_a_1_1.loadFromFile("Release/a_1_1.png");
	Texture textura_a_1_2;
	textura_a_1_2.loadFromFile("Release/a_1_2.png");
	Texture textura_a_1_3;
	textura_a_1_3.loadFromFile("Release/a_1_3.png");
	Texture textura_a_1_4;
	textura_a_1_4.loadFromFile("Release/a_1_4.png");
	Texture textura_a_1_5;
	textura_a_1_5.loadFromFile("Release/a_1_5.png");
	Texture textura_player;
	textura_player.loadFromFile("Release/player.png");
	Texture textura_ball;
	textura_ball.loadFromFile("Release/ball.png");
	Texture textura_preparation_1;
	textura_preparation_1.loadFromFile("Release/preparation_1.png");
	Texture textura_preparation_2;
	textura_preparation_2.loadFromFile("Release/preparation_2.png");
	Texture textura_preparation_3;
	textura_preparation_3.loadFromFile("Release/preparation_3.png");
	Texture textura_preparation_n;
	textura_preparation_n.loadFromFile("Release/preparation_n.png");
	Texture textura_back_to_game_level_selection;
	textura_back_to_game_level_selection.loadFromFile("Release/back_to_game_level_selection.png");
	Texture textura_out_of_game;
	textura_out_of_game.loadFromFile("Release/out_of_game.png");
	Texture textura_you_won;
	textura_you_won.loadFromFile("Release/you_won.png");
	Texture textura_block_1;
	textura_block_1.loadFromFile("Release/block_1.png");
	Texture textura_block_2;
	textura_block_2.loadFromFile("Release/block_2.png");
	Texture textura_block_3;
	textura_block_3.loadFromFile("Release/block_3.png");
	Texture textura_block_4;
	textura_block_4.loadFromFile("Release/block_4.png");
	Texture textura_block_5;
	textura_block_5.loadFromFile("Release/block_5.png");
	Texture textura_custom_level_menu;
	textura_custom_level_menu.loadFromFile("Release/custom_level_menu.png");
	Texture textura_obvodka_block_4;
	textura_obvodka_block_4.loadFromFile("Release/obvodka_block_4.png");
	Texture textura_obvodka_block_5;
	textura_obvodka_block_5.loadFromFile("Release/obvodka_block_5.png");
	Texture textura_red_line;
	textura_red_line.loadFromFile("Release/red_line.png");
	Texture textura_custom_level_button;
	textura_custom_level_button.loadFromFile("Release/custom_level_button.png");
	Texture textura_player_ball_speed;
	textura_player_ball_speed.loadFromFile("Release/player_ball_speed.png");
	Texture textura_delete;
	textura_delete.loadFromFile("Release/delete.png");
	Texture textura_obvodka_delete;
	textura_obvodka_delete.loadFromFile("Release/obvodka_delete.png");
	Texture textura_ball_speed[20];
	textura_ball_speed[0].loadFromFile("Release/b_s_0_1.png");
	textura_ball_speed[1].loadFromFile("Release/b_s_0_2.png");
	textura_ball_speed[2].loadFromFile("Release/b_s_0_3.png");
	textura_ball_speed[3].loadFromFile("Release/b_s_0_4.png");
	textura_ball_speed[4].loadFromFile("Release/b_s_0_5.png");
	textura_ball_speed[5].loadFromFile("Release/b_s_0_6.png");
	textura_ball_speed[6].loadFromFile("Release/b_s_0_7.png");
	textura_ball_speed[7].loadFromFile("Release/b_s_0_8.png");
	textura_ball_speed[8].loadFromFile("Release/b_s_0_9.png");
	textura_ball_speed[9].loadFromFile("Release/b_s_1_0.png");
	textura_ball_speed[10].loadFromFile("Release/b_s_1_1.png");
	textura_ball_speed[11].loadFromFile("Release/b_s_1_2.png");
	textura_ball_speed[12].loadFromFile("Release/b_s_1_3.png");
	textura_ball_speed[13].loadFromFile("Release/b_s_1_4.png");
	textura_ball_speed[14].loadFromFile("Release/b_s_1_5.png");
	textura_ball_speed[15].loadFromFile("Release/b_s_1_6.png");
	textura_ball_speed[16].loadFromFile("Release/b_s_1_7.png");
	textura_ball_speed[17].loadFromFile("Release/b_s_1_8.png");
	textura_ball_speed[18].loadFromFile("Release/b_s_1_9.png");
	textura_ball_speed[19].loadFromFile("Release/b_s_2_0.png");
	Texture textura_player_speed[20];
	textura_player_speed[0].loadFromFile("Release/p_s_0_1.png");
	textura_player_speed[1].loadFromFile("Release/p_s_0_2.png");
	textura_player_speed[2].loadFromFile("Release/p_s_0_3.png");
	textura_player_speed[3].loadFromFile("Release/p_s_0_4.png");
	textura_player_speed[4].loadFromFile("Release/p_s_0_5.png");
	textura_player_speed[5].loadFromFile("Release/p_s_0_6.png");
	textura_player_speed[6].loadFromFile("Release/p_s_0_7.png");
	textura_player_speed[7].loadFromFile("Release/p_s_0_8.png");
	textura_player_speed[8].loadFromFile("Release/p_s_0_9.png");
	textura_player_speed[9].loadFromFile("Release/p_s_1_0.png");
	textura_player_speed[10].loadFromFile("Release/p_s_1_1.png");
	textura_player_speed[11].loadFromFile("Release/p_s_1_2.png");
	textura_player_speed[12].loadFromFile("Release/p_s_1_3.png");
	textura_player_speed[13].loadFromFile("Release/p_s_1_4.png");
	textura_player_speed[14].loadFromFile("Release/p_s_1_5.png");
	textura_player_speed[15].loadFromFile("Release/p_s_1_6.png");
	textura_player_speed[16].loadFromFile("Release/p_s_1_7.png");
	textura_player_speed[17].loadFromFile("Release/p_s_1_8.png");
	textura_player_speed[18].loadFromFile("Release/p_s_1_9.png");
	textura_player_speed[19].loadFromFile("Release/p_s_2_0.png");


	//��������� �������� � �������
	obj.background.setTexture(textura_background_third);
	obj.settings_button.setTexture(textura_settings_button);
	obj.name_of_the_game.setTexture(textura_name_of_the_game);
	obj.start_button.setTexture(textura_start_button);
	obj.exit_button.setTexture(textura_exit_button);
	obj.settings_menu.setTexture(textura_settings_menu);
	obj.background_selection.setTexture(textura_background_selection);
	obj.back.setTexture(textura_back);
	obj.gro.setTexture(textura_gro);
	obj.und.setTexture(textura_und);
	obj.a_d_vs_l_r.setTexture(textura_a_d_vs_l_r);
	obj.a_d.setTexture(textura_a_d);
	obj.l_r.setTexture(textura_l_r);
	obj.music_menu.setTexture(textura_music_menu);
	obj.what_music.setTexture(textura_what_music_2);
	obj.game_level_selection.setTexture(textura_game_level_selection);
	obj.levels.setTexture(textura_levels);
	obj.placement_menu.setTexture(textura_placement_menu);
	obj.plus_or_minus.setTexture(textura_plus_or_minus);
	obj.if_a_equally_11.setTexture(textura_if_a_equally_11);
	obj.if_a_equally_1.setTexture(textura_if_a_equally_1);
	obj.what_a_size.setTexture(textura_a_1_0);
	obj.ball.setTexture(textura_ball);
	obj.player.setTexture(textura_player);
	obj.preparation_1.setTexture(textura_preparation_1);
	obj.preparation_2.setTexture(textura_preparation_2);
	obj.preparation_3.setTexture(textura_preparation_3);
	obj.preparation_n.setTexture(textura_preparation_n);
	obj.back_to_game_level_selection.setTexture(textura_back_to_game_level_selection);
	obj.out_of_game.setTexture(textura_out_of_game);
	obj.you_won.setTexture(textura_you_won);
	for (int i = 0; i < 21; i++)
	{
		obj.block_1[i].setTexture(textura_block_1);
	}
	for (int i = 0; i < 52; i++)
	{
		obj.block_2[i].setTexture(textura_block_2);
	}
	for (int i = 0; i < 220; i++)
	{
		obj.block_3[i].setTexture(textura_block_3);
	}
	obj.custom_level_menu.setTexture(textura_custom_level_menu);
	obj.obvodka_block_4.setTexture(textura_obvodka_block_4);
	obj.obvodka_block_5.setTexture(textura_obvodka_block_5);
	obj.red_line.setTexture(textura_red_line);
	obj.custom_level_button.setTexture(textura_custom_level_button);
	obj.player_ball_speed.setTexture(textura_player_ball_speed);
	obj.delette.setTexture(textura_delete);
	obj.obvodka_delete.setTexture(textura_obvodka_delete);
	for (int i = 0; i < 20; i++)
	{
		obj.player_speed[i].setTexture(textura_player_speed[i]);
		obj.ball_speed[i].setTexture(textura_ball_speed[i]);
	}

	//���������� ������� ��� ��������� ����������� ��������


	while (window.isOpen()) //���� ���� �������
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
			{
				window.close();
			}

			//���� ������ �� ����� ������ ����
			if (event.type == Event::MouseButtonPressed)
			{
				//���������� ������� �������
				Vector2i pos = Mouse::getPosition(window);

				//���� ��������� � ����
				if (b.menu)
				{
					//���� ��� ������� ������ exit_button
					if (pos.x >= 878 * pxpy && pos.x <= 1267 * pxpy && pos.y >= 411 * pxpy && pos.y <= 512 * pxpy)
					{
						window.close();
					}

					//���� ��� ������� ������ settings_button
					if (pos.x >= 449 * pxpy && pos.x <= 839 * pxpy && pos.y >= 363 * pxpy && pos.y <= 447 * pxpy)
					{
						b.menu = false;
						b.settings = true;
						continue;
					}

					//���� ��� ������� ������ start
					if (pos.x >= 20 * pxpy && pos.y >= 425 * pxpy && pos.x <= 408 * pxpy && pos.y <= 519 * pxpy)
					{
						b.menu = false;
						b.game_level_selection = true;
						continue;
					}
				}

				//���� ��������� � ������ ������� ����
				if (b.background_selection)
				{
					//���� ��� ������� ������� ������� ����
					if (pos.x >= 8 * pxpy && pos.x <= 420 * pxpy && pos.y >= 8 * pxpy && pos.y <= 591 * pxpy)
					{
						obj.background.setTexture(textura_background_first);
						b.background1 = true;
						b.background2 = false;
						b.background3 = false;
						b.settings = true;
						b.background_selection = false;
						continue;
					}
					//���� ��� ������� ������� ������� ����
					if (pos.x >= 437 * pxpy && pos.x <= 849 * pxpy && pos.y >= 8 * pxpy && pos.y <= 591 * pxpy)
					{
						obj.background.setTexture(textura_background_second);
						b.background1 = false;
						b.background2 = true;
						b.background3 = false;
						b.settings = true;
						b.background_selection = false;
						continue;
					}
					//���� ��� ������� �������� ������� ����
					if (pos.x >= 866 * pxpy && pos.x <= 1278 * pxpy && pos.y >= 8 * pxpy && pos.y <= 591 * pxpy)
					{
						obj.background.setTexture(textura_background_third);
						b.background1 = false;
						b.background2 = false;
						b.background3 = true;
						b.settings = true;
						b.background_selection = false;
						continue;
					}
				}

				//���� ��������� � ����������
				if (b.settings)
				{
					//���� ��� ������� ������ back_to_menu
					if (pos.x >= 421 * pxpy && pos.x <= 826 * pxpy && pos.y >= 523 * pxpy && pos.y <= 582 * pxpy)
					{
						b.menu = true;
						b.settings = false;
						continue;
					}

					//���� ��� ������� ������ background
					if (pos.x >= 110 * pxpy && pos.y >= 60 * pxpy && pos.x <= 1176 * pxpy && pos.y <= 159 * pxpy)
					{
						b.settings = false;
						b.background_selection = true;
						continue;
					}

					//���� ��� ������� ������ management
					if (pos.x >= 109 * pxpy && pos.y >= 360 * pxpy && pos.x <= 637 * pxpy && pos.y <= 459 * pxpy)
					{
						b.a_d_vs_l_r = true;
						b.settings = false;
						continue;
					}

					//���� ��� ������� ������ music
					if (pos.x >= 466 * pxpy && pos.y >= 210 * pxpy && pos.x <= 820 * pxpy && pos.y <= 309 * pxpy)
					{
						b.settings = false;
						b.music_menu = true;
						continue;
					}

					//���� ��� ������� ������ placement
					if (pos.x >= 648 * pxpy && pos.y >= 360 * pxpy && pos.x <= 1177 * pxpy && pos.y <= 460 * pxpy)
					{
						b.settings = false;
						b.placement_menu = true;
						continue;
					}

					//���� ��� ������� ����� player_speed, ��� ��� ��� player speed <= 2.0
					if (pos.x >= 404 * pxpy && pos.y >= 186 * pxpy && pos.x <= 451 * pxpy && pos.y <= 233 * pxpy && sch_playerspeed < 19)
					{
						sch_playerspeed = sch_playerspeed + 1;
						playerspeed = playerspeed + 0.1;
						continue;
					}
					//���� ��� ������� ������ player_speed, ��� ��� ��� player speed >= 0.1
					if (pos.x >= 111 * pxpy && pos.y >= 186 * pxpy && pos.x <= 158 * pxpy && pos.y <= 233 * pxpy && sch_playerspeed > 0)
					{
						sch_playerspeed = sch_playerspeed - 1;
						playerspeed = playerspeed - 0.1;
						continue;
					}
					//���� ��� ������� ����� ball_speed, ��� ��� ��� ball speed <= 2.0
					if (pos.x >= 404 * pxpy && pos.y >= 286 * pxpy && pos.x <= 451 * pxpy && pos.y <= 333 * pxpy && sch_ballspeed < 19)
					{
						sch_ballspeed = sch_ballspeed + 1;
						ballspeed = ballspeed + 0.1;
						continue;
					}
					//���� ��� ������� ������ ball_speed, ��� ��� ��� ball speed >= 0.1
					if (pos.x >= 111 * pxpy && pos.y >= 286 * pxpy && pos.x <= 158 * pxpy && pos.y <= 333 * pxpy && sch_ballspeed > 0)
					{
						sch_ballspeed = sch_ballspeed - 1;
						ballspeed = ballspeed - 0.1;
						continue;
					}
				}

				//���� ��������� � ������ ����������
				if (b.a_d_vs_l_r)
				{
					//���� ������ ��������� � ����
					if (pos.x >= 218 * pxpy && pos.y >= 443 * pxpy && pos.x <= 1068 * pxpy && pos.y <= 549 * pxpy)
					{
						b.a_d_vs_l_r = false;
						b.settings = true;
						continue;
					}

					//���� ������ ����� �� a/d
					if (pos.x >= 225 * pxpy && pos.y >= 225 * pxpy && pos.x <= 582 * pxpy && pos.y <= 374 * pxpy)
					{
						b.a_d = true;
						b.l_r = false;
						continue;
					}

					//���� ������ ����� �� ���������
					if (pos.x >= 704 * pxpy && pos.y >= 225 * pxpy && pos.x <= 1062 * pxpy && pos.y <= 374 * pxpy)
					{
						b.a_d = false;
						b.l_r = true;
						continue;
					}
				}

				//���� ��������� � ������ ������
				if (b.music_menu)
				{
					//���� ����� �������
					if (pos.x >= 967 * pxpy && pos.x <= 985 * pxpy && pos.y >= 151 * pxpy && pos.y <= 169 * pxpy)
					{
						b.music_menu = false;
						b.settings = true;
						continue;
					}

					//���� ������ ������ ������
					if (pos.x >= 326 * pxpy && pos.y >= 176 * pxpy && pos.x <= 960 * pxpy && pos.y <= 256 * pxpy)
					{
						music_one.play();
						music_second.stop();
						obj.what_music.setTexture(textura_what_music_1);
						continue;
					}

					//���� ������ ������ ������
					if (pos.x >= 326 * pxpy && pos.x <= 960 * pxpy && pos.y >= 260 * pxpy && pos.y <= 341 * pxpy)
					{
						music_one.stop();
						music_second.play();
						obj.what_music.setTexture(textura_what_music_2);
						continue;
					}

					//���� ������ ���������� ������
					if (pos.x >= 326 * pxpy && pos.x <= 960 * pxpy && pos.y >= 345 * pxpy && pos.y <= 423 * pxpy)
					{
						music_one.stop();
						music_second.stop();
						obj.what_music.setTexture(textura_what_music_3);
						continue;
					}
				}

				//���� ��������� � ������ ������ ����
				if (b.game_level_selection)
				{
					//���� ������ �� ������ back_to_menu
					if (pos.x >= 1 * pxpy && pos.y >= 401 * pxpy && pos.x <= 501 * pxpy && pos.y <= 600 * pxpy)
					{
						b.game_level_selection = false;
						b.menu = true;
						continue;
					}

					//���� ������ �� ������ �������
					if (pos.x >= 15 * pxpy && pos.y >= 15 * pxpy && pos.x <= 264 * pxpy && pos.y <= 264 * pxpy)
					{
						b.game_level_selection = false;
						playerlife = 0;
						//����������� ������ ��� 1-�� ������
						for (int i = 0; i < 11; i++)
						{
							obj.block_1[i].setPosition(84 + (102 * i), 60);
							playerlife = playerlife + 1;
						}
						for (int i = 11; i < 21; i++)
						{
							obj.block_1[i].setPosition(140 + ((102) * (i - 11)), 120);
							playerlife = playerlife + 1;
						}
						obj.ball.setPosition(628, 530); //628,530
						obj.player.setPosition(573, 560); //573,560
						b.preparation_1 = true;
						continue;
					}
					//���� ������ �� ������ �������
					if (pos.x >= 315 * pxpy && pos.y >= 15 * pxpy && pos.x <= 564 * pxpy && pos.y <= 264 * pxpy)
					{
						b.game_level_selection = false;
						playerlife = 0;
						//����������� ������ ��� ������� ������
						for (int i = 0; i < 11; i++)
						{
							obj.block_2[i].setPosition(84 + (102 * i), 60);
							obj.block_2[i + 11].setPosition(84 + (102 * i), 120);
							playerlife = playerlife + 2;
						}
						for (int i = 22; i < 27; i++)
						{
							obj.block_2[i].setPosition(84 + (102 * (i - 22)), 180);
							obj.block_2[i + 5].setPosition(696 + (102 * (i - 22)), 180);
							playerlife = playerlife + 2;
						}
						for (int i = 32; i < 36; i++)
						{
							obj.block_2[i].setPosition(84 + (102 * (i - 32)), 240);
							obj.block_2[i + 4].setPosition(798 + (102 * (i - 32)), 240);
							playerlife = playerlife + 2;
						}
						for (int i = 40; i < 43; i++)
						{
							obj.block_2[i].setPosition(84 + (102 * (i - 40)), 300);
							obj.block_2[i + 3].setPosition(900 + (102 * (i - 40)), 300);
							playerlife = playerlife + 2;
						}
						for (int i = 46; i < 48; i++)
						{
							obj.block_2[i].setPosition(84 + (102 * (i - 46)), 360);
							obj.block_2[i + 2].setPosition(1002 + (102 * (i - 46)), 360);
							playerlife = playerlife + 2;
						}
						for (int i = 50; i < 51; i++)
						{
							obj.block_2[i].setPosition(84 + (102 * (i - 50)), 420);
							obj.block_2[i + 1].setPosition(1104 + (102 * (i - 50)), 420);
							playerlife = playerlife + 2;
						}
						obj.ball.setPosition(628, 530); //628,530
						obj.player.setPosition(573, 560); //573,560
						b.preparation_2 = true;
						continue;
					}
					//���� ������ �� ������ �������
					if (pos.x >= 615 * pxpy && pos.y >= 15 * pxpy && pos.x <= 864 * pxpy && pos.y <= 264 * pxpy)
					{
						b.game_level_selection = false;
						playerlife = 0;
						//����������� ������ ��� �������� ������
						for (int i = 0; i < 22; i++)
						{
							for (int j = 0; j < 5; j++)
							{
								obj.block_3[i + (44 * j)].setPosition(41 + (56 * i), 40 + (80 * j));
								playerlife = playerlife + 1;
							}
							for (int j = 0; j < 5; j++)
							{
								obj.block_3[i + 22 + (44 * j)].setPosition(42 + (56 * i), 80 + (80 * j));
								playerlife = playerlife + 1;
							}
						}
						obj.ball.setPosition(628, 530); //628,530
						obj.player.setPosition(573, 560); //573,560
						b.preparation_3 = true;
						continue;
					}

					//���� ������ �� ���� �������, ��� ������� ��� �� ������
					if (how_many_block_4 + how_many_block_5 > 0)
					{
						if (pos.x >= 915 * pxpy && pos.y >= 15 * pxpy && pos.x <= 1164 * pxpy && pos.y <= 264 * pxpy)
						{
							b.game_level_selection = false;
							playerlife = how_many_block_4 + how_many_block_5;
							//����������� ������ ������ ������
							for (int i = 0; i < how_many_block_4; i++)
							{
								obj.block_4[i].setPosition(pos_block_4[0][i], pos_block_4[1][i]);
							}
							for (int i = 0; i < how_many_block_5; i++)
							{
								obj.block_5[i].setPosition(pos_block_5[0][i], pos_block_5[1][i]);
							}
							obj.ball.setPosition(628, 530); //628,530
							obj.player.setPosition(573, 560); //573,560
							b.preparation_n = true;
							continue;
						}
					}
				}

				//���� ��������� � ���������� � ������� ������
				if (b.preparation_1)
				{
					//���� ������ ������ ��������� � ������ �������
					if (pos.x >= 0 * pxpy && pos.y >= 498 * pxpy && pos.x <= 242 * pxpy && pos.y <= 600 * pxpy)
					{
						b.preparation_1 = false;
						b.game_level_selection = true;
						continue;
					}

					//���� ������ ������ ����
					if (pos.x >= 336 * pxpy && pos.y >= 193 * pxpy && pos.x <= 950 * pxpy && pos.y <= 407 * pxpy)
					{
						b.preparation_1 = false;
						b.play_1 = true;
						continue;
					}
				}

				//���� ��������� � ���������� �� ������� ������
				if (b.preparation_2)
				{

					//���� ������ ������ ��������� � ������ �������
					if (pos.x >= 0 * pxpy && pos.y >= 498 * pxpy && pos.x <= 242 * pxpy && pos.y <= 600 * pxpy)
					{
						b.preparation_2 = false;
						b.game_level_selection = true;
						continue;
					}

					//���� ������ ������ ����
					if (pos.x >= 336 * pxpy && pos.y >= 193 * pxpy && pos.x <= 950 * pxpy && pos.y <= 407 * pxpy)
					{
						b.preparation_2 = false;
						b.play_2 = true;
						continue;
					}
				}

				//���� ��������� � ���������� � �������� ������
				if (b.preparation_3)
				{

					//���� ������ ������ ��������� � ������ �������
					if (pos.x >= 0 * pxpy && pos.y >= 498 * pxpy && pos.x <= 242 * pxpy && pos.y <= 600 * pxpy)
					{
						b.preparation_3 = false;
						b.game_level_selection = true;
						continue;
					}

					//���� ������ ������ ����
					if (pos.x >= 336 * pxpy && pos.y >= 193 * pxpy && pos.x <= 950 * pxpy && pos.y <= 407 * pxpy)
					{
						b.preparation_3 = false;
						b.play_3 = true;
						continue;
					}
				}

				//���� ��������� � ���������� � ������ ������
				if (b.preparation_n)
				{

					//���� ������ ������ ��������� � ������ �������
					if (pos.x >= 0 * pxpy && pos.y >= 498 * pxpy && pos.x <= 242 * pxpy && pos.y <= 600 * pxpy)
					{
						b.preparation_n = false;
						b.game_level_selection = true;
						continue;
					}

					//���� ������ ������ ����
					if (pos.x >= 336 * pxpy && pos.y >= 193 * pxpy && pos.x <= 950 * pxpy && pos.y <= 407 * pxpy)
					{
						b.preparation_n = false;
						b.play_n = true;
						continue;
					}
				}

				//���� ��������� � ����� �� ���
				if (b.play_1 || b.play_2 || b.play_3 || b.play_n)
				{
					//���� ������ �������, ����� ����� �� ����
					if (pos.x >= 1 * pxpy && pos.y >= 1 * pxpy && pos.x <= 20 * pxpy && pos.y <= 20 * pxpy)
					{
						//���� ���� � ������ ����
						if (b.play_1)
						{
							b.play_1 = false;
							//����������� ������ ��� 1-�� ������
							for (int i = 0; i < 11; i++)
							{
								obj.block_1[i].setPosition(84 + (102 * i), 60);
							}
							for (int i = 11; i < 21; i++)
							{
								obj.block_1[i].setPosition(140 + ((102) * (i - 11)), 120);
							}
							obj.ball.setPosition(628, 530); //628,530
							obj.player.setPosition(573, 560); //573,560
							b.ballgo = false;
							ballx = ballspeed;
							bally = -1 * ballspeed;
							playerlife = 21;
							b.preparation_1 = true;
							continue;
						}
						//���� ���� �� ������ ����
						if (b.play_2)
						{
							b.play_2 = false;
							//����������� ������ ��� ������� ������
							for (int i = 0; i < 11; i++)
							{
								obj.block_2[i].setPosition(84 + (102 * i), 60);
								obj.block_2[i + 11].setPosition(84 + (102 * i), 120);
							}
							for (int i = 22; i < 27; i++)
							{
								obj.block_2[i].setPosition(84 + (102 * (i - 22)), 180);
								obj.block_2[i + 5].setPosition(696 + (102 * (i - 22)), 180);
							}
							for (int i = 32; i < 36; i++)
							{
								obj.block_2[i].setPosition(84 + (102 * (i - 32)), 240);
								obj.block_2[i + 4].setPosition(798 + (102 * (i - 32)), 240);
							}
							for (int i = 40; i < 43; i++)
							{
								obj.block_2[i].setPosition(84 + (102 * (i - 40)), 300);
								obj.block_2[i + 3].setPosition(900 + (102 * (i - 40)), 300);
							}
							for (int i = 46; i < 48; i++)
							{
								obj.block_2[i].setPosition(84 + (102 * (i - 46)), 360);
								obj.block_2[i + 2].setPosition(1002 + (102 * (i - 46)), 360);
							}
							for (int i = 50; i < 51; i++)
							{
								obj.block_2[i].setPosition(84 + (102 * (i - 50)), 420);
								obj.block_2[i + 1].setPosition(1104 + (102 * (i - 50)), 420);
							}
							obj.ball.setPosition(628, 530); //628,530
							obj.player.setPosition(573, 560); //573,560
							b.ballgo = false;
							ballx = ballspeed;
							bally = -1 * ballspeed;
							playerlife = 52;
							b.preparation_2 = true;
							continue;
						}
						//���� ���� � ������� ����
						if (b.play_3)
						{
							b.play_3 = false;
							//����������� ������ ��� �������� ������
							for (int i = 0; i < 22; i++)
							{
								for (int j = 0; j < 5; j++)
								{
									obj.block_3[i + (44 * j)].setPosition(41 + (56 * i), 40 + (80 * j));
								}
								for (int j = 0; j < 5; j++)
								{
									obj.block_3[i + 22 + (44 * j)].setPosition(42 + (56 * i), 80 + (80 * j));
								}
							}
							obj.ball.setPosition(628, 530); //628,530
							obj.player.setPosition(573, 560); //573,560
							b.ballgo = false;
							ballx = ballspeed;
							bally = -1 * ballspeed;
							playerlife = 220;
							b.preparation_3 = true;
							continue;
						}
						//���� ���� � ����� ����
						if (b.play_n)
						{
							b.play_n = false;
							//����������� ������ ��� ������ ������
							for (int i = 0; i < how_many_block_4; i++)
							{
								obj.block_4[i].setPosition(pos_block_4[0][i], pos_block_4[1][i]);
							}
							for (int i = 0; i < how_many_block_5; i++)
							{
								obj.block_5[i].setPosition(pos_block_5[0][i], pos_block_5[1][i]);
							}
							obj.ball.setPosition(628, 530); //628,530
							obj.player.setPosition(573, 560); //573,560
							b.ballgo = false;
							ballx = ballspeed;
							bally = -1 * ballspeed;
							playerlife = how_many_block_4 + how_many_block_5;
							b.preparation_n = true;
							continue;
						}
					}
				}

				//���� ��������� � ����������
				if (b.placement_menu)
				{
					//���� ������ back_to_settings
					if (pos.x >= 5 * pxpy && pos.y >= 406 * pxpy && pos.x <= 759 * pxpy && pos.y <= 594 * pxpy)
					{
						b.placement_menu = false;
						b.settings = true;
						continue;
					}

					//���� ������ ������ size_of_the_window
					if (pos.x >= 5 * pxpy && pos.y >= 5 * pxpy && pos.x <= 759 * pxpy && pos.y <= 395 * pxpy)
					{
						b.placement_menu = false;
						b.plus_or_minus = true;
						continue;
					}

					//���� ������ ������ custom_level
					if (pos.x >= 770 * pxpy && pos.y >= 406 * pxpy && pos.x <= 1281 * pxpy && pos.y <= 594 * pxpy)
					{
						b.placement_menu = false;
						b.custom_level = true;
						obj.ball.setPosition(628, 530); //628,530
						obj.player.setPosition(573, 560); //573,560
						continue;
					}
				}
				//���� ��������� � �������� ������������ ������
				if (b.custom_level)
				{
					//���� ������ ��������� � ���� ����������
					if (pos.x >= 1 * pxpy && pos.y >= 551 * pxpy && pos.x <= 103 * pxpy && pos.y <= 598 * pxpy)
					{
						b.obvodka_block_4 = false;
						b.obvodka_block_5 = false;
						b.obvodka_delete = false;
						b.custom_level = false;
						b.placement_menu = true;
						continue;
					}

					//���� ������ �� ����_4
					if (pos.x >= 112 * pxpy && pos.y >= 562 * pxpy && pos.x <= 167 * pxpy && pos.y <= 589 * pxpy)
					{
						b.obvodka_block_4 = true;
						b.obvodka_block_5 = false;
						b.obvodka_delete = false;
						continue;
					}

					//���� ������ �� ����_5
					if (pos.x >= 206 * pxpy && pos.y >= 569 * pxpy && pos.x <= 233 * pxpy && pos.y <= 582 * pxpy)
					{
						b.obvodka_block_5 = true;
						b.obvodka_block_4 = false;
						b.obvodka_delete = false;
						continue;
					}

					//���� ������ �� delete
					if (pos.x >= 273 * pxpy && pos.y >= 563 * pxpy && pos.x <= 358 * pxpy && pos.y <= 590 * pxpy)
					{
						b.obvodka_block_5 = false;
						b.obvodka_block_4 = false;
						b.obvodka_delete = true;
						continue;
					}

					//���� ������ �� ���� � ������_4 � ��������� ���������
					if (b.obvodka_block_4)
					{
						if (pos.x >= 28 * pxpy && pos.y >= 14 * pxpy && pos.x <= (1231 + 28) * pxpy && pos.y <= (482 + 14) * pxpy)
						{
							obj.block_4[how_many_block_4].setTexture(textura_block_4);
							obj.block_4[how_many_block_4].setPosition((pos.x / pxpy) - 28, (pos.y / pxpy) - 14);
							pos_block_4[0].push_back((pos.x / pxpy) - 28);
							pos_block_4[1].push_back((pos.y / pxpy) - 14);
							how_many_block_4 = how_many_block_4 + 1;
						}
					}

					//���� ������ �� ���� � ������_5 � ��������� ���������
					if (b.obvodka_block_5)
					{
						if (pos.x >= 14 * pxpy && pos.y >= 7 * pxpy && pos.x <= (1259 + 14) * pxpy && pos.y <= (496 + 7) * pxpy)
						{
							obj.block_5[how_many_block_5].setTexture(textura_block_5);
							obj.block_5[how_many_block_5].setPosition((pos.x / pxpy) - 14, (pos.y / pxpy) - 7);
							pos_block_5[0].push_back((pos.x / pxpy) - 14);
							pos_block_5[1].push_back((pos.y / pxpy) - 7);
							how_many_block_5 = how_many_block_5 + 1;
						}
					}

					//���� ������ �� ���� � delete � ���������
					if (b.obvodka_delete)
					{
						//�������� ��������� �� ���������� �����_4 (��������)
						if (how_many_block_4 > 0)
						{
							for (int i = how_many_block_4 - 1; i >= 0; i--)
							{
								if (pos.x / pxpy >= pos_block_4[0][i] && pos.x / pxpy <= (pos_block_4[0][i] + 56) && pos.y / pxpy >= pos_block_4[1][i] && pos.y / pxpy <= (pos_block_4[1][i] + 28))
								{
									if (how_many_block_4 > 1)
									{
										//������ ��� ���������� �� ��������� � ��������� ����� �������
										Vector2f vremennaia_pos_4_1 = obj.block_4[i].getPosition();
										Vector2f vremennaia_pos_4_2 = obj.block_4[how_many_block_4 - 1].getPosition();
										obj.block_4[i].setPosition(vremennaia_pos_4_2.x, vremennaia_pos_4_2.y);
										obj.block_4[how_many_block_4 - 1].setPosition(vremennaia_pos_4_1.x, vremennaia_pos_4_1.y);
										float zamzam = pos_block_4[0][i];
										pos_block_4[0][i] = pos_block_4[0][how_many_block_4 - 1];
										pos_block_4[0][how_many_block_4 - 1] = zamzam;
										zamzam = pos_block_4[1][i];
										pos_block_4[1][i] = pos_block_4[1][how_many_block_4 - 1];
										pos_block_4[1][how_many_block_4 - 1] = zamzam;
										//������� ���������� � ��������� �����
										how_many_block_4 = how_many_block_4 - 1;
										pos_block_4[0].pop_back();
										pos_block_4[1].pop_back();
										i = -1;
										continue;
									}
									else
									{
										//������� ���������� � ������������ �����
										how_many_block_4 = 0;
										pos_block_4[0].pop_back();
										pos_block_4[1].pop_back();
										i = -1;
										continue;
									}
								}
							}
						}
						//�������� ��������� �� �����_5 (����������)
						if (how_many_block_5 > 0)
						{
							for (int i = how_many_block_5 - 1; i >= 0; i--)
							{
								if (pos.x / pxpy >= pos_block_5[0][i] && pos.x / pxpy <= (pos_block_5[0][i] + 28) && pos.y / pxpy >= pos_block_5[1][i] && pos.y / pxpy <= (pos_block_5[1][i] + 14))
								{
									if (how_many_block_5 > 1)
									{
										//������ ��� ���������� �� ��������� � ��������� �����
										Vector2f vremennaia_pos_5_1 = obj.block_5[i].getPosition();
										Vector2f vremennaia_pos_5_2 = obj.block_5[how_many_block_5 - 1].getPosition();
										obj.block_5[i].setPosition(vremennaia_pos_5_2.x, vremennaia_pos_5_2.y);
										obj.block_5[how_many_block_5 - 1].setPosition(vremennaia_pos_5_1.x, vremennaia_pos_5_1.y);
										float zamza = pos_block_5[0][i];
										pos_block_5[0][i] = pos_block_5[0][how_many_block_5 - 1];
										pos_block_5[0][how_many_block_5 - 1] = zamza;
										zamza = pos_block_5[1][i];
										pos_block_5[1][i] = pos_block_5[1][how_many_block_5 - 1];
										pos_block_5[1][how_many_block_5 - 1] = zamza;
										//������� ���������� � ��������� �����
										how_many_block_5 = how_many_block_5 - 1;
										pos_block_5[0].pop_back();
										pos_block_5[1].pop_back();
										i = -1;
										continue;
									}
									else
									{
										//������� ���������� � ������������ �����
										how_many_block_5 = 0;
										pos_block_5[0].pop_back();
										pos_block_5[1].pop_back();
										i = -1;
										continue;
									}
								}
							}
						}
					}

					//���� ������ �� ������ "���������"
					if (pos.x >= 1072 * pxpy && pos.y >= 516 * pxpy && pos.x <= 1285 * pxpy && pos.y <= 598 * pxpy)
					{
						for (int i = 0; i < how_many_block_4; i++)
						{
							obj.block_4[i].setPosition(-100, -100);
							pos_block_4[1].pop_back();
							pos_block_4[0].pop_back();
						}
						for (int i = 0; i < how_many_block_5; i++)
						{
							obj.block_5[i].setPosition(-100, -100);
							pos_block_5[1].pop_back();
							pos_block_5[0].pop_back();
						}
						how_many_block_4 = 0;
						how_many_block_5 = 0;
					}
				}

				//���� ��������� � ���� ������
				if (b.you_won)
				{
					//���� ������ ������ OK
					if (pos.x >= 782 * pxpy && pos.y >= 100 * pxpy && pos.x <= 1051 * pxpy && pos.y <= 287 * pxpy)
					{
						b.you_won = false;
						obj.ball.setPosition(628, 530); //628,530
						obj.player.setPosition(573, 560); //573,560
						b.ballgo = false;
						ballx = ballspeed;
						bally = -1 * ballspeed;
						b.game_level_selection = true;
					}
				}

				//���� ��������� � ����������-���������� ����
				if (b.plus_or_minus)
				{
					//���� ������ �������
					if (pos.x >= 962 * pxpy && pos.y >= 89 * pxpy && pos.x <= 1002 * pxpy && pos.y <= 129 * pxpy)
					{
						b.plus_or_minus = false;
						b.placement_menu = true;
						continue;
					}

					//���� ������ ����
					if (pos.x >= 297 * pxpy && pos.y >= 130 * pxpy && pos.x <= 628 * pxpy && pos.y <= 438 * pxpy && what_size < 11)
					{
						//���� ������� ������ 1
						if (what_size == 1)
						{
							what_size = 2;
							obj.what_a_size.setTexture(textura_a_0_6);
							window.setSize(Vector2u(772.2, 360));
							pxpy = 0.6;
							continue;
						}
						//���� ������� ������ 2
						if (what_size == 2)
						{
							what_size = 3;
							obj.what_a_size.setTexture(textura_a_0_7);
							window.setSize(Vector2u(900.9, 420));
							pxpy = 0.7;
							continue;
						}
						//���� ������� ������ 3
						if (what_size == 3)
						{
							what_size = 4;
							obj.what_a_size.setTexture(textura_a_0_8);
							window.setSize(Vector2u(1029.6, 480));
							pxpy = 0.8;
							continue;
						}
						//���� ������� ������ 4
						if (what_size == 4)
						{
							what_size = 5;
							obj.what_a_size.setTexture(textura_a_0_9);
							window.setSize(Vector2u(1158.3, 540));
							pxpy = 0.9;
							continue;
						}
						//���� ������� ������ 5
						if (what_size == 5)
						{
							what_size = 6;
							obj.what_a_size.setTexture(textura_a_1_0);
							window.setSize(Vector2u(1287, 600));
							pxpy = 1;
							continue;
						}
						//���� ������� ������ 6
						if (what_size == 6)
						{
							what_size = 7;
							obj.what_a_size.setTexture(textura_a_1_1);
							window.setSize(Vector2u(1415.7, 660));
							pxpy = 1.1;
							continue;
						}
						//���� ������� ������ 7
						if (what_size == 7)
						{
							what_size = 8;
							obj.what_a_size.setTexture(textura_a_1_2);
							window.setSize(Vector2u(1544.4, 720));
							pxpy = 1.2;
							continue;
						}
						//���� ������� ������ 8
						if (what_size == 8)
						{
							what_size = 9;
							obj.what_a_size.setTexture(textura_a_1_3);
							window.setSize(Vector2u(1673.1, 780));
							pxpy = 1.3;
							continue;
						}
						//���� ������� ������ 9
						if (what_size == 9)
						{
							what_size = 10;
							obj.what_a_size.setTexture(textura_a_1_4);
							window.setSize(Vector2u(1801.8, 840));
							pxpy = 1.4;
							continue;
						}
						//���� ������� ������ 10
						if (what_size == 10)
						{
							what_size = 11;
							obj.what_a_size.setTexture(textura_a_1_5);
							window.setSize(Vector2u(1930.5, 900));
							pxpy = 1.5;
							continue;
						}

					}
					//���� ������ ����� 
					if (pos.x >= 630 * pxpy && pos.y >= 130 * pxpy && pos.x <= 961 * pxpy && pos.y <= 438 * pxpy && what_size > 1)
					{
						//���� ������� ������ 11
						if (what_size == 11)
						{
							what_size = 10;
							obj.what_a_size.setTexture(textura_a_1_4);
							window.setSize(Vector2u(1801.8, 840));
							pxpy = 1.4;
							continue;
						}
						//���� ������� ������ 10
						if (what_size == 10)
						{
							what_size = 9;
							obj.what_a_size.setTexture(textura_a_1_3);
							window.setSize(Vector2u(1673.1, 780));
							pxpy = 1.3;
							continue;
						}
						//���� ������� ������ 9
						if (what_size == 9)
						{
							what_size = 8;
							obj.what_a_size.setTexture(textura_a_1_2);
							window.setSize(Vector2u(1544.4, 720));
							pxpy = 1.2;
							continue;
						}
						//���� ������� ������ 8
						if (what_size == 8)
						{
							what_size = 7;
							obj.what_a_size.setTexture(textura_a_1_1);
							window.setSize(Vector2u(1415.7, 660));
							pxpy = 1.1;
							continue;
						}
						//���� ������� ������ 7
						if (what_size == 7)
						{
							what_size = 6;
							obj.what_a_size.setTexture(textura_a_1_0);
							window.setSize(Vector2u(1287, 600));
							pxpy = 1;
							continue;
						}
						//���� ������� ������ 6
						if (what_size == 6)
						{
							what_size = 5;
							obj.what_a_size.setTexture(textura_a_0_9);
							window.setSize(Vector2u(1158.3, 540));
							pxpy = 0.9;
							continue;
						}
						//���� ������� ������ 5
						if (what_size == 5)
						{
							what_size = 4;
							obj.what_a_size.setTexture(textura_a_0_8);
							window.setSize(Vector2u(1029.6, 480));
							pxpy = 0.8;
							continue;
						}
						//���� ������� ������ 4
						if (what_size == 4)
						{
							what_size = 3;
							obj.what_a_size.setTexture(textura_a_0_7);
							window.setSize(Vector2u(900.9, 420));
							pxpy = 0.7;
							continue;
						}
						//���� ������� ������ 3
						if (what_size == 3)
						{
							what_size = 2;
							obj.what_a_size.setTexture(textura_a_0_6);
							window.setSize(Vector2u(772.2, 360));
							pxpy = 0.6;
							continue;
						}
						//���� ������� ������ 2
						if (what_size == 2)
						{
							what_size = 1;
							obj.what_a_size.setTexture(textura_a_0_5);
							window.setSize(Vector2u(643.5, 300));
							pxpy = 0.5;
							continue;
						}
					}
				}
			}
		}

		//���� ��������� � ����� ������, ������������ ���
		if (b.play_n)
		{
			window.draw(obj.background);
			window.draw(obj.out_of_game);
			for (int i = 0; i < how_many_block_4; i++)
			{
				window.draw(obj.block_4[i]);
			}
			for (int i = 0; i < how_many_block_5; i++)
			{
				window.draw(obj.block_5[i]);
			}
			window.draw(obj.player);
			window.draw(obj.ball);
		}
		//���� � ����, ������������ ���
		if (b.menu)
		{
			window.draw(obj.background);
			window.draw(obj.settings_button);
			window.draw(obj.name_of_the_game);
			window.draw(obj.start_button);
			window.draw(obj.exit_button);
		}
		//���� � ����������, ������������ ���
		if (b.settings)
		{
			window.draw(obj.settings_menu);
			if (b.background1)
			{
				window.draw(obj.gro);
			}
			if (b.background2)
			{
				window.draw(obj.und);
			}
			if (b.background3)
			{
				window.draw(obj.back);
			}
			window.draw(obj.player_ball_speed);
			window.draw(obj.player_speed[sch_playerspeed]);
			window.draw(obj.ball_speed[sch_ballspeed]);
		}
		//���� � ������ ������� ����, ������������ ���
		if (b.background_selection)
		{
			window.draw(obj.background_selection);
		}
		//���� ��������� � ������ ����������, ������������ ���
		if (b.a_d_vs_l_r)
		{
			window.draw(obj.a_d_vs_l_r);
			if (b.a_d)
			{
				window.draw(obj.a_d);
			}
			if (b.l_r)
			{
				window.draw(obj.l_r);
			}
		}
		//���� ��������� � ������ ������, ������������ ���
		if (b.music_menu)
		{
			window.draw(obj.settings_menu);
			window.draw(obj.player_ball_speed);
			if (b.background1)
			{
				window.draw(obj.gro);
			}
			if (b.background2)
			{
				window.draw(obj.und);
			}
			if (b.background3)
			{
				window.draw(obj.back);
			}
			window.draw(obj.music_menu);
			window.draw(obj.what_music);
		}
		//���� ��������� � ������ ������� ����, ������������ ��� 
		if (b.game_level_selection)
		{
			window.draw(obj.game_level_selection);
			window.draw(obj.levels);
			if (how_many_block_4 + how_many_block_5 > 0)
			{
				window.draw(obj.custom_level_button);
			}
		}
		//���� ��������� � ����������, ������������ ���
		if (b.placement_menu)
		{
			window.draw(obj.placement_menu);
		}
		//���� ��������� � ����������-���������� ����, ������������ ���
		if (b.plus_or_minus)
		{
			window.draw(obj.placement_menu);
			window.draw(obj.plus_or_minus);
			if (what_size == 11)
			{
				window.draw(obj.if_a_equally_11);
			}
			if (what_size == 1)
			{
				window.draw(obj.if_a_equally_1);
			}
			window.draw(obj.what_a_size);
		}
		//���� ��������� � ���� ������, ������������ ���
		if (b.you_won)
		{
			window.draw(obj.background);
			window.draw(obj.you_won);
		}
		//���� ��������� � ���������� � ������� ������, ������������ ���
		if (b.preparation_1)
		{
			window.draw(obj.background);
			for (int i = 0; i < 21; i++)
			{
				window.draw(obj.block_1[i]);
			}
			window.draw(obj.preparation_1);
			window.draw(obj.player);
			window.draw(obj.ball);
			window.draw(obj.back_to_game_level_selection);
		}
		//���� ��������� � ���������� �� ������� ������, ������������ ���
		if (b.preparation_2)
		{
			window.draw(obj.background);
			for (int i = 0; i < 52; i++)
			{
				window.draw(obj.block_2[i]);
			}
			window.draw(obj.preparation_2);
			window.draw(obj.player);
			window.draw(obj.ball);
			window.draw(obj.back_to_game_level_selection);
		}
		//���� ��������� � ���������� � �������� ������, ������������ ���
		if (b.preparation_3)
		{
			window.draw(obj.background);
			for (int i = 0; i < 220; i++)
			{
				window.draw(obj.block_3[i]);
			}
			window.draw(obj.preparation_3);
			window.draw(obj.player);
			window.draw(obj.ball);
			window.draw(obj.back_to_game_level_selection);
		}
		//���� � �������� ������������ ������, ������������ ���
		if (b.custom_level)
		{
			window.draw(obj.background);
			window.draw(obj.custom_level_menu);
			window.draw(obj.delette);
			if (b.obvodka_block_4)
			{
				window.draw(obj.obvodka_block_4);
			}
			if (b.obvodka_block_5)
			{
				window.draw(obj.obvodka_block_5);
			}
			if (b.obvodka_delete)
			{
				window.draw(obj.obvodka_delete);
			}
			window.draw(obj.player);
			window.draw(obj.ball);
			window.draw(obj.red_line);
			for (int i = 0; i < how_many_block_4; i++)
			{
				window.draw(obj.block_4[i]);
			}
			for (int i = 0; i < how_many_block_5; i++)
			{
				window.draw(obj.block_5[i]);
			}
		}
		//���� ��������� � ���������� � ������ ������, ������������ ���
		if (b.preparation_n)
		{
			window.draw(obj.background);
			for (int i = 0; i < how_many_block_4; i++)
			{
				window.draw(obj.block_4[i]);
			}
			for (int i = 0; i < how_many_block_5; i++)
			{
				window.draw(obj.block_5[i]);
			}
			window.draw(obj.preparation_n);
			window.draw(obj.player);
			window.draw(obj.ball);
			window.draw(obj.back_to_game_level_selection);
		}
		//����� ������ ��� ���� � �����
		if (b.play_1 || b.play_2 || b.play_3 || b.play_n)
		{
			Vector2f p_ball = obj.ball.getPosition();
			//���� ���� ����, ��� ��������
			if (b.ballgo)
			{
				obj.ball.move(pxpy * ballx, pxpy * bally);
			}
			//���� ��������� ������� �������
			if (p_ball.y <= 1)
			{
				bally = ballspeed;
			}
			//���� ��������� ������ �������
			if (p_ball.x >= 1256)
			{
				ballx = -1 * ballspeed;
			}
			//���� ��������� ����� �������
			if (p_ball.x <= 1)
			{
				ballx = ballspeed;
			}
			//���� ��������� ������ �������
			if (p_ball.y >= 569)
			{
				b.ballgo = false;
				obj.ball.setPosition(628, 530); //628,530
				obj.player.setPosition(573, 560); //573,560
				ballx = ballspeed;
				bally = -1 * ballspeed;
				if (b.play_1)
				{
					b.play_1 = false;
					//����������� ������ ��� 1-�� ������
					for (int i = 0; i < 11; i++)
					{
						obj.block_1[i].setPosition(84 + (102 * i), 60);
					}
					for (int i = 11; i < 21; i++)
					{
						obj.block_1[i].setPosition(140 + ((102) * (i - 11)), 120);
					}
					playerlife = 21;
					b.preparation_1 = true;
					continue;
				}
				if (b.play_2)
				{
					b.play_2 = false;
					//����������� ������ ��� ������� ������
					for (int i = 0; i < 11; i++)
					{
						obj.block_2[i].setPosition(84 + (102 * i), 60);
						obj.block_2[i + 11].setPosition(84 + (102 * i), 120);
					}
					for (int i = 22; i < 27; i++)
					{
						obj.block_2[i].setPosition(84 + (102 * (i - 22)), 180);
						obj.block_2[i + 5].setPosition(696 + (102 * (i - 22)), 180);
					}
					for (int i = 32; i < 36; i++)
					{
						obj.block_2[i].setPosition(84 + (102 * (i - 32)), 240);
						obj.block_2[i + 4].setPosition(798 + (102 * (i - 32)), 240);
					}
					for (int i = 40; i < 43; i++)
					{
						obj.block_2[i].setPosition(84 + (102 * (i - 40)), 300);
						obj.block_2[i + 3].setPosition(900 + (102 * (i - 40)), 300);
					}
					for (int i = 46; i < 48; i++)
					{
						obj.block_2[i].setPosition(84 + (102 * (i - 46)), 360);
						obj.block_2[i + 2].setPosition(1002 + (102 * (i - 46)), 360);
					}
					for (int i = 50; i < 51; i++)
					{
						obj.block_2[i].setPosition(84 + (102 * (i - 50)), 420);
						obj.block_2[i + 1].setPosition(1104 + (102 * (i - 50)), 420);
					}
					playerlife = 52;
					b.preparation_2 = true;
					continue;
				}
				if (b.play_3)
				{
					b.play_3 = false;
					//����������� ������ ��� �������� ������
					for (int i = 0; i < 22; i++)
					{
						for (int j = 0; j < 5; j++)
						{
							obj.block_3[i + (44 * j)].setPosition(41 + (56 * i), 40 + (80 * j));
						}
						for (int j = 0; j < 5; j++)
						{
							obj.block_3[i + 22 + (44 * j)].setPosition(42 + (56 * i), 80 + (80 * j));
						}
					}
					playerlife = 220;
					b.preparation_3 = true;
					continue;
				}
				if (b.play_n)
				{
					b.play_n = false;
					for (int i = 0; i < how_many_block_4; i++)
					{
						obj.block_4[i].setPosition(pos_block_4[0][i], pos_block_4[1][i]);
					}
					for (int i = 0; i < how_many_block_5; i++)
					{
						obj.block_5[i].setPosition(pos_block_5[0][i], pos_block_5[1][i]);
					}
					playerlife = how_many_block_4 + how_many_block_5;
					b.preparation_n = true;
					continue;
				}
			}
			//���� ��� �������� ������
			if (obj.ball.getGlobalBounds().intersects(obj.player.getGlobalBounds()))
			{
				bally = -1 * ballspeed;
			}
			//���� ������ ������� ������� (������ ����)
			if (Keyboard::isKeyPressed(Keyboard::Space))
			{
				if (!b.ballgo)
				{
					b.ballgo = true;
				}
			}
		}
		//�������������� ���� � ������� �� ������ ������
		if (b.play_1)
		{
			for (int i = 0; i < 21; i++)
			{
				if (obj.ball.getGlobalBounds().intersects(obj.block_1[i].getGlobalBounds()))
				{
					playerlife = playerlife - 1;
					Vector2f p_block_1 = obj.block_1[i].getPosition();
					Vector2f p_ball_1 = obj.ball.getPosition();
					//���� ��������� � ���� �����
					if (p_ball_1.y + 29 <= p_block_1.y)
					{
						bally = -1 * ballspeed;
					}
					//���� ��������� � ����� ������� �����
					else if (p_ball_1.x + 29 <= p_block_1.x)
					{
						ballx = -1 * ballspeed;
					}
					//���� ��������� � ������ ������� �����
					else if (p_ball_1.x - 55 >= p_block_1.x)
					{
						ballx = ballspeed;
					}
					//���� ��������� � ��� �����
					else
					{
						bally = ballspeed;
					}
					obj.block_1[i].setPosition(-50, -50);
					if (playerlife == 0)
					{
						b.play_1 = false;
						b.you_won = true;
						continue;
					}
				}
			}
		}
		//�������������� ���� � ������� �� ������ ������
		if (b.play_2)
		{
			for (int i = 0; i < 52; i++)
			{
				if (obj.ball.getGlobalBounds().intersects(obj.block_2[i].getGlobalBounds()))
				{
					playerlife = playerlife - 1;
					Vector2f p_block_2 = obj.block_2[i].getPosition();
					Vector2f p_ball_2 = obj.ball.getPosition();
					//���� ��������� � ���� �����
					if (p_ball_2.y + 29 <= p_block_2.y)
					{
						bally = -1 * ballspeed;
					}
					//���� ��������� � ����� ������� �����
					else if (p_ball_2.x + 29 <= p_block_2.x)
					{
						ballx = -1 * ballspeed;
					}
					//���� ��������� � ������ ������� �����
					else if (p_ball_2.x - 55 >= p_block_2.x)
					{
						ballx = ballspeed;
					}
					//���� ��������� � ��� �����
					else
					{
						bally = ballspeed;
					}
					obj.block_2[i].setPosition(-50, -50);
					if (playerlife == 0)
					{
						b.play_2 = false;
						b.you_won = true;
						continue;
					}
				}
			}
		}
		//�������������� ���� � ������� �� ������� ������
		if (b.play_3)
		{
			for (int i = 0; i < 220; i++)
			{
				if (obj.ball.getGlobalBounds().intersects(obj.block_3[i].getGlobalBounds()))
				{
					playerlife = playerlife - 1;
					Vector2f p_block_3 = obj.block_3[i].getPosition();
					Vector2f p_ball_3 = obj.ball.getPosition();
					//���� ��������� � ���� �����
					if (p_ball_3.y + 29 <= p_block_3.y)
					{
						bally = -1 * ballspeed;
					}
					//���� ��������� � ����� ������� �����
					else if (p_ball_3.x + 29 <= p_block_3.x)
					{
						ballx = -1 * ballspeed;
					}
					//���� ��������� � ������ ������� �����
					else if (p_ball_3.x - 27 >= p_block_3.x)
					{
						ballx = ballspeed;
					}
					//���� ��������� � ��� �����
					else
					{
						bally = ballspeed;
					}
					obj.block_3[i].setPosition(-50, -50);
					if (playerlife == 0)
					{
						b.play_3 = false;
						b.you_won = true;
						continue;
					}
				}
			}
		}
		//�������������� ���� � ������� �� ����� ������
		if (b.play_n)
		{
			for (int i = 0; i < how_many_block_4; i++)
			{
				if (obj.ball.getGlobalBounds().intersects(obj.block_4[i].getGlobalBounds()))
				{
					playerlife = playerlife - 1;
					Vector2f p_block_4 = obj.block_4[i].getPosition();
					Vector2f p_ball_4 = obj.ball.getPosition();
					//���� ��������� � ���� �����
					if (p_ball_4.y + 29 <= p_block_4.y)
					{
						bally = -1 * ballspeed;
					}
					//���� ��������� � ����� ������� �����
					else if (p_ball_4.x + 29 <= p_block_4.x)
					{
						ballx = -1 * ballspeed;
					}
					//���� ��������� � ������ ������� �����
					else if (p_ball_4.x - 55 >= p_block_4.x)
					{
						ballx = ballspeed;
					}
					//���� ��������� � ��� �����
					else
					{
						bally = ballspeed;
					}
					obj.block_4[i].setPosition(-100, -100);
				}
			}
			for (int i = 0; i < how_many_block_5; i++)
			{
				if (obj.ball.getGlobalBounds().intersects(obj.block_5[i].getGlobalBounds()))
				{
					playerlife = playerlife - 1;
					Vector2f p_block_5 = obj.block_5[i].getPosition();
					Vector2f p_ball_5 = obj.ball.getPosition();
					//���� ��������� � ���� �����
					if (p_ball_5.y + 29 <= p_block_5.y)
					{
						bally = -1 * ballspeed;
					}
					//���� ��������� � ����� ������� �����
					else if (p_ball_5.x + 29 <= p_block_5.x)
					{
						ballx = -1 * ballspeed;
					}
					//���� ��������� � ������ ������� �����
					else if (p_ball_5.x - 27 >= p_block_5.x)
					{
						ballx = ballspeed;
					}
					//���� ��������� � ��� �����
					else
					{
						bally = ballspeed;
					}
					obj.block_5[i].setPosition(-100, -100);
				}
			}
			if (playerlife == 0)
			{
				b.play_n = false;
				b.you_won = true;
				continue;
			}
		}
		//����� ������ ��� ������ � �����
		if (b.play_1 || b.play_2 || b.play_3 || b.play_n)
		{
			Vector2f p_player = obj.player.getPosition();
			if (b.a_d)
			{
				if (Keyboard::isKeyPressed(Keyboard::D))
				{
					if (p_player.x < (1146))
					{
						obj.player.move(playerspeed * pxpy, 0);
						if (!b.ballgo)
						{
							obj.ball.move(playerspeed * pxpy, 0);
						}
					}
				}
				if (Keyboard::isKeyPressed(Keyboard::A))
				{
					if (p_player.x > 1)
					{
						obj.player.move(-1 * playerspeed * pxpy, 0);
						if (!b.ballgo)
						{
							obj.ball.move(-1 * playerspeed * pxpy, 0);
						}
					}
				}
			}
			if (b.l_r)
			{
				if (Keyboard::isKeyPressed(Keyboard::Right))
				{
					if (p_player.x < (1146))
					{
						obj.player.move(playerspeed * pxpy, 0);
						if (!b.ballgo)
						{
							obj.ball.move(playerspeed * pxpy, 0);
						}
					}
				}
				if (Keyboard::isKeyPressed(Keyboard::Left))
				{
					if (p_player.x > 1)
					{
						obj.player.move(-1 * playerspeed * pxpy, 0);
						if (!b.ballgo)
						{
							obj.ball.move(-1 * playerspeed * pxpy, 0);
						}
					}
				}
			}
		}
		//���� ��������� � ������ ������, ������������ ���
		if (b.play_1)
		{
			window.draw(obj.background);
			window.draw(obj.out_of_game);
			for (int i = 0; i < 21; i++)
			{
				window.draw(obj.block_1[i]);
			}
			window.draw(obj.player);
			window.draw(obj.ball);
		}
		//���� ��������� �� ������ ������, ������������ ���
		if (b.play_2)
		{
			window.draw(obj.background);
			window.draw(obj.out_of_game);
			for (int i = 0; i < 52; i++)
			{
				window.draw(obj.block_2[i]);
			}
			window.draw(obj.player);
			window.draw(obj.ball);
		}
		//���� ��������� � ������� ������, ������������ ���
		if (b.play_3)
		{
			window.draw(obj.background);
			window.draw(obj.out_of_game);
			for (int i = 0; i < 220; i++)
			{
				window.draw(obj.block_3[i]);
			}
			window.draw(obj.player);
			window.draw(obj.ball);
		}
		window.display(); //��������� � ���� �������, �� ������� ������������ ����

	}

	return 0;
}