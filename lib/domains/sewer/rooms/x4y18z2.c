inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 18, 2 }));
  set_short( "Corridor - x4y18z2" );
set_objects( DIR+"/monsters/r1physist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y18z2.c",
  "east" : DIR+"/rooms/x5y18z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the sludge in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
