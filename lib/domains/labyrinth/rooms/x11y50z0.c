inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 50, 0 }));
  set_short( "Passage - x11y50z0" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y51z0.c",
  "south" : DIR+"/rooms/x11y49z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the sludge in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
