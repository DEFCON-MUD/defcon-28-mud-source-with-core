inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 26, 5 }));
  set_short( "Passage - x15y26z5" );
set_objects( DIR+"/npc/r1radiologist.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y26z5.c",
  "south" : DIR+"/rooms/x15y25z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crap in this sty. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
