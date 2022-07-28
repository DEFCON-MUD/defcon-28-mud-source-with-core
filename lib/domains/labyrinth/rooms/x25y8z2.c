inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 8, 2 }));
  set_short( "Corridor - x25y8z2" );
set_objects( DIR+"/npc/northdomeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y8z2.c",
  "east" : DIR+"/rooms/x26y8z2.c",
  "south" : DIR+"/rooms/x25y7z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the random junk evilmog thought up in this area. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, east, and west.%^RESET%^");
}
