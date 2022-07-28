inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 41, 1 }));
  set_short( "Hallway - x51y41z1" );
set_objects( DIR+"/npc/cellguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y42z1.c",
  "south" : DIR+"/rooms/x51y40z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the gunk in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
