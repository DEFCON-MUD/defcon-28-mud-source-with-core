inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 2, 7 }));
  set_short( "Passage - x35y2z7" );
set_objects( DIR+"/monsters/biddleman.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y2z7.c",
  "north" : DIR+"/rooms/x35y3z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the gunk in this hellhole. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
