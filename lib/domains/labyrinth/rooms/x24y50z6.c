inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 50, 6 }));
  set_short( "Hallway - x24y50z6" );
set_objects( DIR+"/npc/johnson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y50z6.c",
  "east" : DIR+"/rooms/x25y50z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
