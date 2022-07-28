inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 11, 0 }));
  set_short( "Corridor - x29y11z0" );
set_objects( DIR+"/npc/blob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y12z0.c",
  "south" : DIR+"/rooms/x29y10z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the sludge in this hellhole. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
