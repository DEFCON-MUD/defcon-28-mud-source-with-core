inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 30, 9 }));
  set_short( "Corridor - x25y30z9" );
set_objects( DIR+"/monsters/blob.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y30z9.c",
  "north" : DIR+"/rooms/x25y31z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the radioactive waste in this hellhole. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
