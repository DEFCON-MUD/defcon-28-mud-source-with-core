inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 32, 5 }));
  set_short( "Corridor - x23y32z5" );
set_objects( DIR+"/npc/mutatedcockroach.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y32z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crappy sales material in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east.%^RESET%^");
}
