inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 6, 6 }));
  set_short( "Hallway - x57y6z6" );
set_objects( DIR+"/monsters/olasha.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y6z6.c",
  "east" : DIR+"/rooms/x58y6z6.c",
  "north" : DIR+"/rooms/x57y7z6.c",
  "south" : DIR+"/rooms/x57y5z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crap in this sty. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, east, north, and west.%^RESET%^");
}
