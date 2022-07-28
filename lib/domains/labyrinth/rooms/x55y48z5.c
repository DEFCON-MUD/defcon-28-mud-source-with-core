inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 48, 5 }));
  set_short( "Corridor - x55y48z5" );
set_objects( DIR+"/npc/r1radsensor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y48z5.c",
  "south" : DIR+"/rooms/x55y47z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the radioactive waste in this hellhole. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
