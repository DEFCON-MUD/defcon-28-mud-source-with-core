inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 39, 2 }));
  set_short( "Corridor - x39y39z2" );
set_objects( DIR+"/monsters/dba.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y40z2.c",
  "south" : DIR+"/rooms/x39y38z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crap in this hellhole. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
