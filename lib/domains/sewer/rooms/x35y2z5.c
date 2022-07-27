inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 2, 5 }));
  set_short( "Passage - x35y2z5" );
set_objects( DIR+"/monsters/johnson.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y2z5.c",
  "north" : DIR+"/rooms/x35y3z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the random junk evilmog thought up in this joint. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
