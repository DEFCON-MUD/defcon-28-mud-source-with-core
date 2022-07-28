inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 44, 1 }));
  set_short( "Hallway - x58y44z1" );
set_objects( DIR+"/npc/lyndia.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y44z1.c",
  "east" : DIR+"/rooms/x59y44z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
