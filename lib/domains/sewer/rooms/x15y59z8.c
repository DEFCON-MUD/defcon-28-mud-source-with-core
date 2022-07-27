inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 59, 8 }));
  set_short( "Hallway - x15y59z8" );
set_objects( DIR+"/monsters/dba.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y60z8.c",
  "south" : DIR+"/rooms/x15y58z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
