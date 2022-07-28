inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 40, 1 }));
  set_short( "Corridor - x9y40z1" );
set_objects( DIR+"/npc/salesdroid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y40z1.c",
  "north" : DIR+"/rooms/x9y41z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
