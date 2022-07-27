inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 24, 7 }));
  set_short( "Passage - x53y24z7" );
set_objects( DIR+"/monsters/r1mandrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y24z7.c",
  "north" : DIR+"/rooms/x53y25z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crap in this area. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
