inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 58, 6 }));
  set_short( "Corridor - x23y58z6" );
set_objects( DIR+"/npc/magnus.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y58z6.c",
  "north" : DIR+"/rooms/x23y59z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
