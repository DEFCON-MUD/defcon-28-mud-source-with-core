inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 62, 9 }));
  set_short( "Hallway - x4y62z9" );
set_objects( DIR+"/npc/mila.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y62z9.c",
  "east" : DIR+"/rooms/x5y62z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
