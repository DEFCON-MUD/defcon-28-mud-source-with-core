inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 31, 7 }));
  set_short( "Corridor - x33y31z7" );
set_objects( DIR+"/npc/hans.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y32z7.c",
  "south" : DIR+"/rooms/x33y30z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
