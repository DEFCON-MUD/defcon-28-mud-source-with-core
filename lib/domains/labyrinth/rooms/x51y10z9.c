inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 10, 9 }));
  set_short( "Corridor - x51y10z9" );
set_objects( DIR+"/npc/r1marilynn.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y11z9.c",
  "south" : DIR+"/rooms/x51y9z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the radioactive waste in this hellhole. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
