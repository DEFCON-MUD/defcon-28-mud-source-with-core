inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 62, 5 }));
  set_short( "Hallway - x39y62z5" );
set_objects( DIR+"/monsters/r1hannah.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y62z5.c",
  "east" : DIR+"/rooms/x40y62z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crap in this joint. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
