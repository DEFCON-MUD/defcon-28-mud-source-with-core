inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 39, 5 }));
  set_short( "Corridor - x51y39z5" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y40z5.c",
  "south" : DIR+"/rooms/x51y38z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the gunk in this hellhole. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
