inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 51, 0 }));
  set_short( "Corridor - x59y51z0" );
set_objects( DIR+"/monsters/hans.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y52z0.c",
  "south" : DIR+"/rooms/x59y50z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
