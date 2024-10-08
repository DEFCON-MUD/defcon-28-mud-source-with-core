inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 6, 8 }));
  set_short( "Corridor - x39y6z8" );
set_objects( DIR+"/monsters/andy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y6z8.c",
  "east" : DIR+"/rooms/x40y6z8.c",
  "north" : DIR+"/rooms/x39y7z8.c",
  "south" : DIR+"/rooms/x39y5z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the random junk evilmog thought up in this area. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, east, north, and west.%^RESET%^");
}
