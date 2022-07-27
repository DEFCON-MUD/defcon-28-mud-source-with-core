inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 6, 6 }));
  set_short( "Corridor - x39y6z6" );
set_objects( DIR+"/monsters/deformedweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y6z6.c",
  "south" : DIR+"/rooms/x39y5z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crap in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
