inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 62, 5 }));
  set_short( "Corridor - x42y62z5" );
set_objects( DIR+"/monsters/prisonguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y62z5.c",
  "east" : DIR+"/rooms/x43y62z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the glorzo in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
