inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 6, 5 }));
  set_short( "Corridor - x41y6z5" );
set_objects( DIR+"/npc/r1alan.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y6z5.c",
  "south" : DIR+"/rooms/x41y5z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
