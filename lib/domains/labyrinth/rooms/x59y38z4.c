inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 38, 4 }));
  set_short( "Corridor - x59y38z4" );
set_objects( DIR+"/npc/stoner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y38z4.c",
  "east" : DIR+"/rooms/x60y38z4.c",
  "south" : DIR+"/rooms/x59y37z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, east, and west.%^RESET%^");
}
