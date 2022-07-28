inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 20, 8 }));
  set_short( "Corridor - x32y20z8" );
set_objects( DIR+"/npc/fern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y20z8.c",
  "east" : DIR+"/rooms/x33y20z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
