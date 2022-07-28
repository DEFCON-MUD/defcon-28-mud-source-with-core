inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 16, 5 }));
  set_short( "Corridor - x23y16z5" );
set_objects( DIR+"/npc/eastformatter.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y16z5.c",
  "north" : DIR+"/rooms/x23y17z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the muck in this stink-pit. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
