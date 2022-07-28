inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 56, 3 }));
  set_short( "Passage - x23y56z3" );
set_objects( DIR+"/npc/drone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y57z3.c",
  "south" : DIR+"/rooms/x23y55z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
