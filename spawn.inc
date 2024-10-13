/*
                               ,--.   ,--.,---.  ,------. ,--.  ,---.,--.   ,--.,------.,--.   
                                \  `.'  //  O  \ |  .--. '|  | /  O  \\  `.'  / |  .---'|  |   
                                 \     /|  .-.  ||  '--'.'|  ||  .-.  |\     /  |  `--, |  |   
                                  \   / |  | |  ||  |\  \ |  ||  | |  | \   /   |  `---.|  '--.
                                   `-'  `--' `--'`--' '--'`--'`--' `--'  `-'    `------'`-----'
*/




new PlayerText:TD_ESPAWN[MAX_PLAYERS][30];

new Float:eixoX = 291.0; // Coordenadas ao longo do eixo X
new Float:eixoY = 139.0; // Coordenadas ao longo do eixo Y
new Float:larguramapX = 180.0; // Largura do mapa (tamanho).
new Float:larguramapY = 171.4; // Altura do mapa (tamanho).
new Float:larguraiconX = 8.0; // Largura do ícone do jogador no mapa (tamanho).
new Float:larguraiconY = 8.0; // Altura do ícone do jogador no mapa (tamanho).

new bool:TextCriada[MAX_PLAYERS];




/*
                                     ,---. ,--------. ,-----.  ,-----.,--. ,--.
                                    '   .-''--.  .--''  .-.  ''  .--./|  .'   /
                                    `.  `-.   |  |   |  | |  ||  |    |  .   ' 
                                    .-'    |  |  |   '  '-'  ''  '--'\|  |\   \
                                    `-----'   `--'    `-----'  `-----'`--' '--'
*/




stock LOAD_TD_ESPAWN(playerid) {
    TD_ESPAWN[playerid][0] = CreatePlayerTextDraw(playerid, 288.703, 121.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, TD_ESPAWN[playerid][0], 184.000, 192.000);
    PlayerTextDrawAlignment(playerid, TD_ESPAWN[playerid][0], 1);
    PlayerTextDrawColor(playerid, TD_ESPAWN[playerid][0], 336860415);
    PlayerTextDrawSetShadow(playerid, TD_ESPAWN[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, TD_ESPAWN[playerid][0], 0);
    PlayerTextDrawBackgroundColor(playerid, TD_ESPAWN[playerid][0], 255);
    PlayerTextDrawFont(playerid, TD_ESPAWN[playerid][0], 4);
    PlayerTextDrawSetProportional(playerid, TD_ESPAWN[playerid][0], 1);

    TD_ESPAWN[playerid][1] = CreatePlayerTextDraw(playerid, 187.901, 121.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, TD_ESPAWN[playerid][1], 184.000, 192.000);
    PlayerTextDrawAlignment(playerid, TD_ESPAWN[playerid][1], 1);
    PlayerTextDrawColor(playerid, TD_ESPAWN[playerid][1], 336860415);
    PlayerTextDrawSetShadow(playerid, TD_ESPAWN[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, TD_ESPAWN[playerid][1], 0);
    PlayerTextDrawBackgroundColor(playerid, TD_ESPAWN[playerid][1], 255);
    PlayerTextDrawFont(playerid, TD_ESPAWN[playerid][1], 4);
    PlayerTextDrawSetProportional(playerid, TD_ESPAWN[playerid][1], 1);

    TD_ESPAWN[playerid][2] = CreatePlayerTextDraw(playerid, 289.703, 122.399, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, TD_ESPAWN[playerid][2], 182.000, 190.000);
    PlayerTextDrawAlignment(playerid, TD_ESPAWN[playerid][2], 1);
    PlayerTextDrawColor(playerid, TD_ESPAWN[playerid][2], 252645375);
    PlayerTextDrawSetShadow(playerid, TD_ESPAWN[playerid][2], 0);
    PlayerTextDrawSetOutline(playerid, TD_ESPAWN[playerid][2], 0);
    PlayerTextDrawBackgroundColor(playerid, TD_ESPAWN[playerid][2], 255);
    PlayerTextDrawFont(playerid, TD_ESPAWN[playerid][2], 4);
    PlayerTextDrawSetProportional(playerid, TD_ESPAWN[playerid][2], 1);

    TD_ESPAWN[playerid][3] = CreatePlayerTextDraw(playerid, 188.901, 122.399, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, TD_ESPAWN[playerid][3], 100.000, 190.000);
    PlayerTextDrawAlignment(playerid, TD_ESPAWN[playerid][3], 1);
    PlayerTextDrawColor(playerid, TD_ESPAWN[playerid][3], 252645375);
    PlayerTextDrawSetShadow(playerid, TD_ESPAWN[playerid][3], 0);
    PlayerTextDrawSetOutline(playerid, TD_ESPAWN[playerid][3], 0);
    PlayerTextDrawBackgroundColor(playerid, TD_ESPAWN[playerid][3], 255);
    PlayerTextDrawFont(playerid, TD_ESPAWN[playerid][3], 4);
    PlayerTextDrawSetProportional(playerid, TD_ESPAWN[playerid][3], 1);

    TD_ESPAWN[playerid][4] = CreatePlayerTextDraw(playerid, 290.703, 123.100, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, TD_ESPAWN[playerid][4], 180.000, 15.000);
    PlayerTextDrawAlignment(playerid, TD_ESPAWN[playerid][4], 1);
    PlayerTextDrawColor(playerid, TD_ESPAWN[playerid][4], 185273343);
    PlayerTextDrawSetShadow(playerid, TD_ESPAWN[playerid][4], 0);
    PlayerTextDrawSetOutline(playerid, TD_ESPAWN[playerid][4], 0);
    PlayerTextDrawBackgroundColor(playerid, TD_ESPAWN[playerid][4], 255);
    PlayerTextDrawFont(playerid, TD_ESPAWN[playerid][4], 4);
    PlayerTextDrawSetProportional(playerid, TD_ESPAWN[playerid][4], 1);

    TD_ESPAWN[playerid][5] = CreatePlayerTextDraw(playerid, 384.598, 125.800, "Escolha_onde_vai_Spawnar");
    PlayerTextDrawLetterSize(playerid, TD_ESPAWN[playerid][5], 0.128, 0.898);
    PlayerTextDrawTextSize(playerid, TD_ESPAWN[playerid][5], -18.000, -7.000);
    PlayerTextDrawAlignment(playerid, TD_ESPAWN[playerid][5], 2);
    PlayerTextDrawColor(playerid, TD_ESPAWN[playerid][5], -117);
    PlayerTextDrawSetShadow(playerid, TD_ESPAWN[playerid][5], 0);
    PlayerTextDrawSetOutline(playerid, TD_ESPAWN[playerid][5], 0);
    PlayerTextDrawBackgroundColor(playerid, TD_ESPAWN[playerid][5], 150);
    PlayerTextDrawFont(playerid, TD_ESPAWN[playerid][5], 2);
    PlayerTextDrawSetProportional(playerid, TD_ESPAWN[playerid][5], 1);

    TD_ESPAWN[playerid][6] = CreatePlayerTextDraw(playerid, eixoX, eixoY, "samaps:map");
    PlayerTextDrawTextSize(playerid, TD_ESPAWN[playerid][6], larguramapX, larguramapY);
    PlayerTextDrawAlignment(playerid, TD_ESPAWN[playerid][6], 1);
    PlayerTextDrawColor(playerid, TD_ESPAWN[playerid][6], -1);
    PlayerTextDrawSetShadow(playerid, TD_ESPAWN[playerid][6], 0);
    PlayerTextDrawSetOutline(playerid, TD_ESPAWN[playerid][6], 0);
    PlayerTextDrawBackgroundColor(playerid, TD_ESPAWN[playerid][6], 255);
    PlayerTextDrawFont(playerid, TD_ESPAWN[playerid][6], 4);
    PlayerTextDrawSetProportional(playerid, TD_ESPAWN[playerid][6], 1);

    TD_ESPAWN[playerid][7] = CreatePlayerTextDraw(playerid, 188.800, 123.100, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, TD_ESPAWN[playerid][7], 100.000, 22.000);
    PlayerTextDrawAlignment(playerid, TD_ESPAWN[playerid][7], 1);
    PlayerTextDrawColor(playerid, TD_ESPAWN[playerid][7], 185273343);
    PlayerTextDrawSetShadow(playerid, TD_ESPAWN[playerid][7], 0);
    PlayerTextDrawSetOutline(playerid, TD_ESPAWN[playerid][7], 0);
    PlayerTextDrawBackgroundColor(playerid, TD_ESPAWN[playerid][7], 255);
    PlayerTextDrawFont(playerid, TD_ESPAWN[playerid][7], 4);
    PlayerTextDrawSetProportional(playerid, TD_ESPAWN[playerid][7], 1);
    PlayerTextDrawSetSelectable(playerid, TD_ESPAWN[playerid][7], true);

    TD_ESPAWN[playerid][8] = CreatePlayerTextDraw(playerid, 188.800, 146.799, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, TD_ESPAWN[playerid][8], 100.000, 22.000);
    PlayerTextDrawAlignment(playerid, TD_ESPAWN[playerid][8], 1);
    PlayerTextDrawColor(playerid, TD_ESPAWN[playerid][8], 185273343);
    PlayerTextDrawSetShadow(playerid, TD_ESPAWN[playerid][8], 0);
    PlayerTextDrawSetOutline(playerid, TD_ESPAWN[playerid][8], 0);
    PlayerTextDrawBackgroundColor(playerid, TD_ESPAWN[playerid][8], 255);
    PlayerTextDrawFont(playerid, TD_ESPAWN[playerid][8], 4);
    PlayerTextDrawSetProportional(playerid, TD_ESPAWN[playerid][8], 1);
    PlayerTextDrawSetSelectable(playerid, TD_ESPAWN[playerid][8], true);

    TD_ESPAWN[playerid][9] = CreatePlayerTextDraw(playerid, 188.800, 170.500, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, TD_ESPAWN[playerid][9], 100.000, 22.000);
    PlayerTextDrawAlignment(playerid, TD_ESPAWN[playerid][9], 1);
    PlayerTextDrawColor(playerid, TD_ESPAWN[playerid][9], 185273343);
    PlayerTextDrawSetShadow(playerid, TD_ESPAWN[playerid][9], 0);
    PlayerTextDrawSetOutline(playerid, TD_ESPAWN[playerid][9], 0);
    PlayerTextDrawBackgroundColor(playerid, TD_ESPAWN[playerid][9], 255);
    PlayerTextDrawFont(playerid, TD_ESPAWN[playerid][9], 4);
    PlayerTextDrawSetProportional(playerid, TD_ESPAWN[playerid][9], 1);
    PlayerTextDrawSetSelectable(playerid, TD_ESPAWN[playerid][9], true);

    TD_ESPAWN[playerid][10] = CreatePlayerTextDraw(playerid, 188.800, 194.102, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, TD_ESPAWN[playerid][10], 100.000, 22.000);
    PlayerTextDrawAlignment(playerid, TD_ESPAWN[playerid][10], 1);
    PlayerTextDrawColor(playerid, TD_ESPAWN[playerid][10], 185273343);
    PlayerTextDrawSetShadow(playerid, TD_ESPAWN[playerid][10], 0);
    PlayerTextDrawSetOutline(playerid, TD_ESPAWN[playerid][10], 0);
    PlayerTextDrawBackgroundColor(playerid, TD_ESPAWN[playerid][10], 255);
    PlayerTextDrawFont(playerid, TD_ESPAWN[playerid][10], 4);
    PlayerTextDrawSetProportional(playerid, TD_ESPAWN[playerid][10], 1);
    PlayerTextDrawSetSelectable(playerid, TD_ESPAWN[playerid][10], true);

    TD_ESPAWN[playerid][11] = CreatePlayerTextDraw(playerid, 195.300, 152.699, "HUD:radar_airYard");
    PlayerTextDrawTextSize(playerid, TD_ESPAWN[playerid][11], 9.000, 11.000);
    PlayerTextDrawAlignment(playerid, TD_ESPAWN[playerid][11], 1);
    PlayerTextDrawColor(playerid, TD_ESPAWN[playerid][11], -1);
    PlayerTextDrawSetShadow(playerid, TD_ESPAWN[playerid][11], 0);
    PlayerTextDrawSetOutline(playerid, TD_ESPAWN[playerid][11], 0);
    PlayerTextDrawBackgroundColor(playerid, TD_ESPAWN[playerid][11], 255);
    PlayerTextDrawFont(playerid, TD_ESPAWN[playerid][11], 4);
    PlayerTextDrawSetProportional(playerid, TD_ESPAWN[playerid][11], 1);

    TD_ESPAWN[playerid][12] = CreatePlayerTextDraw(playerid, 197.101, 129.300, "HUD:radar_enemyAttack");
    PlayerTextDrawTextSize(playerid, TD_ESPAWN[playerid][12], 9.000, 10.000);
    PlayerTextDrawAlignment(playerid, TD_ESPAWN[playerid][12], 1);
    PlayerTextDrawColor(playerid, TD_ESPAWN[playerid][12], -1);
    PlayerTextDrawSetShadow(playerid, TD_ESPAWN[playerid][12], 0);
    PlayerTextDrawSetOutline(playerid, TD_ESPAWN[playerid][12], 0);
    PlayerTextDrawBackgroundColor(playerid, TD_ESPAWN[playerid][12], 255);
    PlayerTextDrawFont(playerid, TD_ESPAWN[playerid][12], 4);
    PlayerTextDrawSetProportional(playerid, TD_ESPAWN[playerid][12], 1);

    TD_ESPAWN[playerid][13] = CreatePlayerTextDraw(playerid, 195.101, 174.600, "HUD:radar_OGLOC");
    PlayerTextDrawTextSize(playerid, TD_ESPAWN[playerid][13], 10.000, 14.000);
    PlayerTextDrawAlignment(playerid, TD_ESPAWN[playerid][13], 1);
    PlayerTextDrawColor(playerid, TD_ESPAWN[playerid][13], -1);
    PlayerTextDrawSetShadow(playerid, TD_ESPAWN[playerid][13], 0);
    PlayerTextDrawSetOutline(playerid, TD_ESPAWN[playerid][13], 0);
    PlayerTextDrawBackgroundColor(playerid, TD_ESPAWN[playerid][13], 255);
    PlayerTextDrawFont(playerid, TD_ESPAWN[playerid][13], 4);
    PlayerTextDrawSetProportional(playerid, TD_ESPAWN[playerid][13], 1);

    TD_ESPAWN[playerid][14] = CreatePlayerTextDraw(playerid, 195.200, 201.699, "HUD:radar_propertyG");
    PlayerTextDrawTextSize(playerid, TD_ESPAWN[playerid][14], 8.000, 9.000);
    PlayerTextDrawAlignment(playerid, TD_ESPAWN[playerid][14], 1);
    PlayerTextDrawColor(playerid, TD_ESPAWN[playerid][14], -1);
    PlayerTextDrawSetShadow(playerid, TD_ESPAWN[playerid][14], 0);
    PlayerTextDrawSetOutline(playerid, TD_ESPAWN[playerid][14], 0);
    PlayerTextDrawBackgroundColor(playerid, TD_ESPAWN[playerid][14], 255);
    PlayerTextDrawFont(playerid, TD_ESPAWN[playerid][14], 4);
    PlayerTextDrawSetProportional(playerid, TD_ESPAWN[playerid][14], 1);

    TD_ESPAWN[playerid][15] = CreatePlayerTextDraw(playerid, 188.800, 217.901, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, TD_ESPAWN[playerid][15], 100.000, 22.000);
    PlayerTextDrawAlignment(playerid, TD_ESPAWN[playerid][15], 1);
    PlayerTextDrawColor(playerid, TD_ESPAWN[playerid][15], 185273343);
    PlayerTextDrawSetShadow(playerid, TD_ESPAWN[playerid][15], 0);
    PlayerTextDrawSetOutline(playerid, TD_ESPAWN[playerid][15], 0);
    PlayerTextDrawBackgroundColor(playerid, TD_ESPAWN[playerid][15], 255);
    PlayerTextDrawFont(playerid, TD_ESPAWN[playerid][15], 4);
    PlayerTextDrawSetProportional(playerid, TD_ESPAWN[playerid][15], 1);
    PlayerTextDrawSetSelectable(playerid, TD_ESPAWN[playerid][15], true);

    TD_ESPAWN[playerid][16] = CreatePlayerTextDraw(playerid, 188.800, 241.401, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, TD_ESPAWN[playerid][16], 100.000, 22.000);
    PlayerTextDrawAlignment(playerid, TD_ESPAWN[playerid][16], 1);
    PlayerTextDrawColor(playerid, TD_ESPAWN[playerid][16], 185273343);
    PlayerTextDrawSetShadow(playerid, TD_ESPAWN[playerid][16], 0);
    PlayerTextDrawSetOutline(playerid, TD_ESPAWN[playerid][16], 0);
    PlayerTextDrawBackgroundColor(playerid, TD_ESPAWN[playerid][16], 255);
    PlayerTextDrawFont(playerid, TD_ESPAWN[playerid][16], 4);
    PlayerTextDrawSetProportional(playerid, TD_ESPAWN[playerid][16], 1);
    PlayerTextDrawSetSelectable(playerid, TD_ESPAWN[playerid][16], true);

    TD_ESPAWN[playerid][17] = CreatePlayerTextDraw(playerid, 195.800, 223.600, "HUD:radar_bulldozer");
    PlayerTextDrawTextSize(playerid, TD_ESPAWN[playerid][17], 9.000, 11.000);
    PlayerTextDrawAlignment(playerid, TD_ESPAWN[playerid][17], 1);
    PlayerTextDrawColor(playerid, TD_ESPAWN[playerid][17], -1);
    PlayerTextDrawSetShadow(playerid, TD_ESPAWN[playerid][17], 0);
    PlayerTextDrawSetOutline(playerid, TD_ESPAWN[playerid][17], 0);
    PlayerTextDrawBackgroundColor(playerid, TD_ESPAWN[playerid][17], 255);
    PlayerTextDrawFont(playerid, TD_ESPAWN[playerid][17], 4);
    PlayerTextDrawSetProportional(playerid, TD_ESPAWN[playerid][17], 1);

    TD_ESPAWN[playerid][18] = CreatePlayerTextDraw(playerid, 194.101, 245.098, "HUD:radar_mafiaCasino");
    PlayerTextDrawTextSize(playerid, TD_ESPAWN[playerid][18], 12.000, 15.000);
    PlayerTextDrawAlignment(playerid, TD_ESPAWN[playerid][18], 1);
    PlayerTextDrawColor(playerid, TD_ESPAWN[playerid][18], -1);
    PlayerTextDrawSetShadow(playerid, TD_ESPAWN[playerid][18], 0);
    PlayerTextDrawSetOutline(playerid, TD_ESPAWN[playerid][18], 0);
    PlayerTextDrawBackgroundColor(playerid, TD_ESPAWN[playerid][18], 255);
    PlayerTextDrawFont(playerid, TD_ESPAWN[playerid][18], 4);
    PlayerTextDrawSetProportional(playerid, TD_ESPAWN[playerid][18], 1);

    TD_ESPAWN[playerid][19] = CreatePlayerTextDraw(playerid, 239.897, 130.600, "Ultima_posicao");
    PlayerTextDrawLetterSize(playerid, TD_ESPAWN[playerid][19], 0.100, 0.799);
    PlayerTextDrawTextSize(playerid, TD_ESPAWN[playerid][19], -18.000, -7.000);
    PlayerTextDrawAlignment(playerid, TD_ESPAWN[playerid][19], 2);
    PlayerTextDrawColor(playerid, TD_ESPAWN[playerid][19], -117);
    PlayerTextDrawSetShadow(playerid, TD_ESPAWN[playerid][19], 0);
    PlayerTextDrawSetOutline(playerid, TD_ESPAWN[playerid][19], 0);
    PlayerTextDrawBackgroundColor(playerid, TD_ESPAWN[playerid][19], 150);
    PlayerTextDrawFont(playerid, TD_ESPAWN[playerid][19], 2);
    PlayerTextDrawSetProportional(playerid, TD_ESPAWN[playerid][19], 1);

    TD_ESPAWN[playerid][20] = CreatePlayerTextDraw(playerid, 239.497, 154.100, "Aeroporto_LS");
    PlayerTextDrawLetterSize(playerid, TD_ESPAWN[playerid][20], 0.100, 0.799);
    PlayerTextDrawTextSize(playerid, TD_ESPAWN[playerid][20], -18.000, -7.000);
    PlayerTextDrawAlignment(playerid, TD_ESPAWN[playerid][20], 2);
    PlayerTextDrawColor(playerid, TD_ESPAWN[playerid][20], -117);
    PlayerTextDrawSetShadow(playerid, TD_ESPAWN[playerid][20], 0);
    PlayerTextDrawSetOutline(playerid, TD_ESPAWN[playerid][20], 0);
    PlayerTextDrawBackgroundColor(playerid, TD_ESPAWN[playerid][20], 150);
    PlayerTextDrawFont(playerid, TD_ESPAWN[playerid][20], 2);
    PlayerTextDrawSetProportional(playerid, TD_ESPAWN[playerid][20], 1);

    TD_ESPAWN[playerid][21] = CreatePlayerTextDraw(playerid, 239.497, 176.901, "HQ");
    PlayerTextDrawLetterSize(playerid, TD_ESPAWN[playerid][21], 0.100, 0.799);
    PlayerTextDrawTextSize(playerid, TD_ESPAWN[playerid][21], -18.000, -7.000);
    PlayerTextDrawAlignment(playerid, TD_ESPAWN[playerid][21], 2);
    PlayerTextDrawColor(playerid, TD_ESPAWN[playerid][21], -117);
    PlayerTextDrawSetShadow(playerid, TD_ESPAWN[playerid][21], 0);
    PlayerTextDrawSetOutline(playerid, TD_ESPAWN[playerid][21], 0);
    PlayerTextDrawBackgroundColor(playerid, TD_ESPAWN[playerid][21], 150);
    PlayerTextDrawFont(playerid, TD_ESPAWN[playerid][21], 2);
    PlayerTextDrawSetProportional(playerid, TD_ESPAWN[playerid][21], 1);

    TD_ESPAWN[playerid][22] = CreatePlayerTextDraw(playerid, 240.796, 201.503, "Casa");
    PlayerTextDrawLetterSize(playerid, TD_ESPAWN[playerid][22], 0.100, 0.799);
    PlayerTextDrawTextSize(playerid, TD_ESPAWN[playerid][22], -18.000, -7.000);
    PlayerTextDrawAlignment(playerid, TD_ESPAWN[playerid][22], 2);
    PlayerTextDrawColor(playerid, TD_ESPAWN[playerid][22], -117);
    PlayerTextDrawSetShadow(playerid, TD_ESPAWN[playerid][22], 0);
    PlayerTextDrawSetOutline(playerid, TD_ESPAWN[playerid][22], 0);
    PlayerTextDrawBackgroundColor(playerid, TD_ESPAWN[playerid][22], 150);
    PlayerTextDrawFont(playerid, TD_ESPAWN[playerid][22], 2);
    PlayerTextDrawSetProportional(playerid, TD_ESPAWN[playerid][22], 1);

    TD_ESPAWN[playerid][23] = CreatePlayerTextDraw(playerid, 240.796, 224.703, "Trabalho");
    PlayerTextDrawLetterSize(playerid, TD_ESPAWN[playerid][23], 0.100, 0.799);
    PlayerTextDrawTextSize(playerid, TD_ESPAWN[playerid][23], -18.000, -7.000);
    PlayerTextDrawAlignment(playerid, TD_ESPAWN[playerid][23], 2);
    PlayerTextDrawColor(playerid, TD_ESPAWN[playerid][23], -117);
    PlayerTextDrawSetShadow(playerid, TD_ESPAWN[playerid][23], 0);
    PlayerTextDrawSetOutline(playerid, TD_ESPAWN[playerid][23], 0);
    PlayerTextDrawBackgroundColor(playerid, TD_ESPAWN[playerid][23], 150);
    PlayerTextDrawFont(playerid, TD_ESPAWN[playerid][23], 2);
    PlayerTextDrawSetProportional(playerid, TD_ESPAWN[playerid][23], 1);

    TD_ESPAWN[playerid][24] = CreatePlayerTextDraw(playerid, 241.296, 248.205, "Random");
    PlayerTextDrawLetterSize(playerid, TD_ESPAWN[playerid][24], 0.100, 0.799);
    PlayerTextDrawTextSize(playerid, TD_ESPAWN[playerid][24], -18.000, -7.000);
    PlayerTextDrawAlignment(playerid, TD_ESPAWN[playerid][24], 2);
    PlayerTextDrawColor(playerid, TD_ESPAWN[playerid][24], -117);
    PlayerTextDrawSetShadow(playerid, TD_ESPAWN[playerid][24], 0);
    PlayerTextDrawSetOutline(playerid, TD_ESPAWN[playerid][24], 0);
    PlayerTextDrawBackgroundColor(playerid, TD_ESPAWN[playerid][24], 150);
    PlayerTextDrawFont(playerid, TD_ESPAWN[playerid][24], 2);
    PlayerTextDrawSetProportional(playerid, TD_ESPAWN[playerid][24], 1);

    TD_ESPAWN[playerid][25] = CreatePlayerTextDraw(playerid, 199.501, 289.802, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, TD_ESPAWN[playerid][25], 79.000, 20.000);
    PlayerTextDrawAlignment(playerid, TD_ESPAWN[playerid][25], 1);
    PlayerTextDrawColor(playerid, TD_ESPAWN[playerid][25], 793726975);
    PlayerTextDrawSetShadow(playerid, TD_ESPAWN[playerid][25], 0);
    PlayerTextDrawSetOutline(playerid, TD_ESPAWN[playerid][25], 0);
    PlayerTextDrawBackgroundColor(playerid, TD_ESPAWN[playerid][25], 255);
    PlayerTextDrawFont(playerid, TD_ESPAWN[playerid][25], 4);
    PlayerTextDrawSetProportional(playerid, TD_ESPAWN[playerid][25], 1);
    PlayerTextDrawSetSelectable(playerid, TD_ESPAWN[playerid][25], true);

    TD_ESPAWN[playerid][26] = CreatePlayerTextDraw(playerid, 240.897, 295.906, "Selecionar");
    PlayerTextDrawLetterSize(playerid, TD_ESPAWN[playerid][26], 0.100, 0.799);
    PlayerTextDrawTextSize(playerid, TD_ESPAWN[playerid][26], -18.000, -7.000);
    PlayerTextDrawAlignment(playerid, TD_ESPAWN[playerid][26], 2);
    PlayerTextDrawColor(playerid, TD_ESPAWN[playerid][26], -117);
    PlayerTextDrawSetShadow(playerid, TD_ESPAWN[playerid][26], 0);
    PlayerTextDrawSetOutline(playerid, TD_ESPAWN[playerid][26], 0);
    PlayerTextDrawBackgroundColor(playerid, TD_ESPAWN[playerid][26], 150);
    PlayerTextDrawFont(playerid, TD_ESPAWN[playerid][26], 2);
    PlayerTextDrawSetProportional(playerid, TD_ESPAWN[playerid][26], 1);

    TD_ESPAWN[playerid][27] = CreatePlayerTextDraw(playerid, 193.101, 123.300, "PARTICLE:roadsignfont");
    PlayerTextDrawTextSize(playerid, TD_ESPAWN[playerid][27], 90.000, 90.000);
    PlayerTextDrawAlignment(playerid, TD_ESPAWN[playerid][27], 1);
    PlayerTextDrawColor(playerid, TD_ESPAWN[playerid][27], -2139062254);
    PlayerTextDrawSetShadow(playerid, TD_ESPAWN[playerid][27], 0);
    PlayerTextDrawSetOutline(playerid, TD_ESPAWN[playerid][27], 0);
    PlayerTextDrawBackgroundColor(playerid, TD_ESPAWN[playerid][27], 255);
    PlayerTextDrawFont(playerid, TD_ESPAWN[playerid][27], 4);
    PlayerTextDrawSetProportional(playerid, TD_ESPAWN[playerid][27], 1);

    TD_ESPAWN[playerid][28] = CreatePlayerTextDraw(playerid, 193.101, 190.498, "PARTICLE:roadsignfont");
    PlayerTextDrawTextSize(playerid, TD_ESPAWN[playerid][28], 90.000, 90.000);
    PlayerTextDrawAlignment(playerid, TD_ESPAWN[playerid][28], 1);
    PlayerTextDrawColor(playerid, TD_ESPAWN[playerid][28], -2139062254);
    PlayerTextDrawSetShadow(playerid, TD_ESPAWN[playerid][28], 0);
    PlayerTextDrawSetOutline(playerid, TD_ESPAWN[playerid][28], 0);
    PlayerTextDrawBackgroundColor(playerid, TD_ESPAWN[playerid][28], 255);
    PlayerTextDrawFont(playerid, TD_ESPAWN[playerid][28], 4);
    PlayerTextDrawSetProportional(playerid, TD_ESPAWN[playerid][28], 1);
}

stock Open_Escolha_Spawn(playerid) { 
    for(new i = 0; i < 29; i++)
        PlayerTextDrawShow(playerid, TD_ESPAWN[playerid][i]);
}





/*
                                ,------. ,--. ,--.,-----.  ,--.   ,--. ,-----.
                                |  .--. '|  | |  ||  |) /_ |  |   |  |'  .--./
                                |  '--' ||  | |  ||  .-.  \|  |   |  ||  |    
                                |  | --' '  '-'  '|  '--' /|  '--.|  |'  '--'\
                                `--'      `-----' `------' `-----'`--' `-----'
*/




forward SetPosMap_TD(playerid, Float:x, Float:y);
public SetPosMap_TD(playerid, Float:x, Float:y) {
    // Calculos
    new 
        Float:eixoiconX,
        Float:eixoiconY,
        Float:larguraX,
        Float:larguraY;

    larguraX = 3000 / (larguramapX / 2);
    larguraY = 3000 / (larguramapY / 2);
    eixoiconX = (eixoX + ( larguramapX / 2)) + ( x / larguraX ) - (larguraiconX / 2);
    eixoiconY = (eixoY + ( larguramapY / 2)) - ( y / larguraY ) - (larguraiconY / 2);

    if(!TextCriada[playerid]) { 
        // destruir o icone criado anteriomente
        PlayerTextDrawHide(playerid, TD_ESPAWN[playerid][29]);

        // Cria a Textdraw do icone
        TD_ESPAWN[playerid][29] = CreatePlayerTextDraw(playerid, eixoiconX, eixoiconY, "HUD:radar_gangP"); 
        PlayerTextDrawTextSize(playerid, TD_ESPAWN[playerid][29], larguraiconX, larguraiconY);
        PlayerTextDrawAlignment(playerid, TD_ESPAWN[playerid][29], 1);
        PlayerTextDrawColor(playerid, TD_ESPAWN[playerid][29], -1);
        PlayerTextDrawSetShadow(playerid, TD_ESPAWN[playerid][29], 0);
        PlayerTextDrawSetOutline(playerid, TD_ESPAWN[playerid][29], 0);
        PlayerTextDrawBackgroundColor(playerid, TD_ESPAWN[playerid][29], 255);
        PlayerTextDrawFont(playerid, TD_ESPAWN[playerid][29], 4);
        PlayerTextDrawSetProportional(playerid, TD_ESPAWN[playerid][29], 1);
    }
    // Fazer icon aparecer no local desejado do mapa
    PlayerTextDrawShow(playerid, TD_ESPAWN[playerid][29]);
    return true;
}




/*

                                ,-----. ,-----. ,--.   ,--.  ,---.  ,--.  ,--.,------.   ,-----. 
                                '  .--./'  .-.  '|   `.'   | /  O  \ |  ,'.|  ||  .-.  \ '  .-.  '
                                |  |    |  | |  ||  |'.'|  ||  .-.  ||  |' '  ||  |  \  :|  | |  |
                                '  '--'\'  '-'  '|  |   |  ||  | |  ||  | `   ||  '--'  /'  '-'  '
                                `-----' `-----' `--'   `--'`--' `--'`--'  `--'`-------'  `-----' 
*/




CMD:testepos(playerid, params[]) {
    new Float:pos[2];
    if(sscanf(params, "a<f>[2]", pos))
        return true;
    SetPosMap_TD(playerid, pos[0], pos[1]);
    return true;
}

CMD:teste1(playerid){
    SetPosMap_TD(playerid, 305.3677, -1908.9465);
    return true;
}