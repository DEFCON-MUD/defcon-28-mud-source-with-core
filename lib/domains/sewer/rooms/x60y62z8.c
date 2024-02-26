inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 62, 8 }));
  set_short( "Corridor - x60y62z8" );
set_objects( DIR+"/monsters/Gl0Rz0.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y62z8.c",
  "east" : DIR+"/rooms/x61y62z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
