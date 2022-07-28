inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 11, 8 }));
  set_short( "Corridor - x29y11z8" );
set_objects( DIR+"/npc/manny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y12z8.c",
  "south" : DIR+"/rooms/x29y10z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
