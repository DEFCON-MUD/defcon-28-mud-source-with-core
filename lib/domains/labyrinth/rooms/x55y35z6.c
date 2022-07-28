inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 35, 6 }));
  set_short( "Corridor - x55y35z6" );
set_objects( DIR+"/npc/captain.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y36z6.c",
  "south" : DIR+"/rooms/x55y34z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the radioactive waste in this stink-pit. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
