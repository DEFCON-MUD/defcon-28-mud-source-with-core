inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 60, 4 }));
  set_short( "Passage - x1y60z4" );
set_objects( DIR+"/npc/koretech.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y60z4.c",
  "north" : DIR+"/rooms/x1y61z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the sludge in this hellhole. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
