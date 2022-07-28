inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 16, 8 }));
  set_short( "Corridor - x59y16z8" );
set_objects( DIR+"/npc/coder.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y16z8.c",
  "south" : DIR+"/rooms/x59y15z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crappy sales material in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
