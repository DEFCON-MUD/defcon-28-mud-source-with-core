inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 56, 1 }));
  set_short( "Hallway - x3y56z1" );
set_objects( DIR+"/npc/ken.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y56z1.c",
  "north" : DIR+"/rooms/x3y57z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
