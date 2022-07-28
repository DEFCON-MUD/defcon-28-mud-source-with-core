inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 60, 8 }));
  set_short( "Corridor - x3y60z8" );
set_objects( DIR+"/npc/buddypetersen.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y60z8.c",
  "south" : DIR+"/rooms/x3y59z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
