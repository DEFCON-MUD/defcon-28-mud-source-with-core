inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 61, 7 }));
  set_short( "Hallway - x59y61z7" );
set_objects( DIR+"/npc/shelledheptosquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y62z7.c",
  "south" : DIR+"/rooms/x59y60z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crud in this area. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
