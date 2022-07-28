inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 22, 9 }));
  set_short( "Hallway - x3y22z9" );
set_objects( DIR+"/npc/bob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y22z9.c",
  "north" : DIR+"/rooms/x3y23z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the muck in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
