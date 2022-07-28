inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 62, 8 }));
  set_short( "Corridor - x35y62z8" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y62z8.c",
  "south" : DIR+"/rooms/x35y61z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the random junk evilmog thought up in this area. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
