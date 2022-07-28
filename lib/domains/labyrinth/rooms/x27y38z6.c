inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 38, 6 }));
  set_short( "Hallway - x27y38z6" );
set_objects( DIR+"/npc/maintenancedroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y38z6.c",
  "east" : DIR+"/rooms/x28y38z6.c",
  "south" : DIR+"/rooms/x27y37z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crap in this area. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, east, and west.%^RESET%^");
}
