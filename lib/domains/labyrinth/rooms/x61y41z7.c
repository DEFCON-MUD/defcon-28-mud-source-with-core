inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 41, 7 }));
  set_short( "Hallway - x61y41z7" );
set_objects( DIR+"/npc/bouncer2.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y42z7.c",
  "south" : DIR+"/rooms/x61y40z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
