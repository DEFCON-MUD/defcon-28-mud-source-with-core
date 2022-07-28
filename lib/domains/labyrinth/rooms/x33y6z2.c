inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 6, 2 }));
  set_short( "Corridor - x33y6z2" );
set_objects( DIR+"/npc/tawny.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y6z2.c",
  "north" : DIR+"/rooms/x33y7z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the sludge in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
