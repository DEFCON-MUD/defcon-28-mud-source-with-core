inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 2, 5 }));
  set_short( "Passage - x41y2z5" );
set_objects( DIR+"/monsters/bouer2.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y2z5.c",
  "north" : DIR+"/rooms/x41y3z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crappy sales material in this stink-pit. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
