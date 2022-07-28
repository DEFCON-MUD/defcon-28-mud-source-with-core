inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 16, 0 }));
  set_short( "Corridor - x17y16z0" );
set_objects( DIR+"/npc/r1hannah.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y16z0.c",
  "east" : DIR+"/rooms/x18y16z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the glorzo in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
