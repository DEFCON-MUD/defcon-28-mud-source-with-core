inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 60, 8 }));
  set_short( "Hallway - x52y60z8" );
set_objects( DIR+"/monsters/weevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y60z8.c",
  "east" : DIR+"/rooms/x53y60z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
