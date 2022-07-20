#include <vector>

void GameBoard:: init(){
    vec <BoardCell*> game; 
    
    //create 
    // emplace back osap 
    //emplace back Al
    game.empalce_back(new Improvable{"AL",40, "Arts1", 50});
    //game.emplace_back(new {"SLC"});
    game.emplace_back(new Improvable{"ML", 60, "Arts1", 50});
    //game.emplace_back(new {"tuition"});
    game.emplace_back(new Res{"MKV", 200});
    game.emplace_back(new Improvable{"ECH", 100, "Arts2", 50});
    //game.emplace_back(new {"Needles Hall"});
    game.emplace_back(new Improvable{"PAS", 100, "Arts2", 50});
    game.emplace_back(new Improvable{"HH", 120, "Arts2", 50});
    //game.emplace_back(new {"DC Tims Line"});
    game.emplace_back(new Improvable{"RCH", 140, "Eng", 100});
    game.emplace_back(new NonImprovable{"PAC", 150, "Gyms"});
    game.emplace_back(new Improvable{"DWE", 140, "Eng", 100});
    game.emplace_back(new Improvable{"CPH", 160, "Eng", 100});
    game.emplace_back(new Res{"UWP", 200});
    game.emplace_back(new Improvable{"LHI", 180, "Health", 100});
    //game.emplace_back(new {"SLC"});
    game.emplace_back(new Improvable{"BMH", 180, "Health", 100});
    game.emplace_back(new Improvable{"OPT", 200, "Health", 100});
    //game.emplace_back(new {"Goose Nesting"});
    game.emplace_back(new Improvable{"EV1", 220, "Env", 150});
    //game.emplace_back(new {"Needles Hall"});
    game.emplace_back(new Improvable{"EV2", 220, "Env", 150});
    game.emplace_back(new Improvable{"EV3", 240, "Env", 150});
    game.emplace_back(new Res{"V1", 200});
    game.emplace_back(new Improvable{"PHYS", 260, "Sci1", 150});
    // game.emplace_back(new {"Needles Hall"});
    game.emplace_back(new Improvable{"B1", 260, "Sci1", 150});
    game.emplace_back(new Improvable{"B2", 280, "Sci1", 150});
    // game.emplace_back(new {"Go to Tims"})
    game.emplace_back(new Improvable{"EIT", 300, "Sci2", 200});
    game.emplace_back(new Improvable{"ESC", 300, "Sci2", 200});
    // game.emplace_back(new {"SLC"});
    game.emplace_back(new Improvable{"C2", 320, "Sci2", 200});
    game.emplace_back(new Res{"Rev", 200});
    // game.emplace_back(new {"Needles Hall"});
    game.emplace_back(new Improvable{"MC", 350, "Math", 200});
    //game.emplace_back(new {"COOP FEE"});
    game.emplace_back(new Improvable{"DC", 400, "Math", 200});
    //...so on till DC Tims Line
}