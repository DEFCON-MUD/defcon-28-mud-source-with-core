inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 6, 7 }));
  set_short( "Hallway - x59y6z7" );
set_objects( DIR+"/npc/maintainer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y6z7.c",
  "east" : DIR+"/rooms/x60y6z7.c",
  "south" : DIR+"/rooms/x59y5z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crap in this hellhole. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}
