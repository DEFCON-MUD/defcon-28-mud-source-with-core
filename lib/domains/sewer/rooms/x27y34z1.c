inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 34, 1 }));
  set_short( "Hallway - x27y34z1" );
set_objects( DIR+"/monsters/snapperjaw.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y34z1.c",
  "north" : DIR+"/rooms/x27y35z1.c",
  "south" : DIR+"/rooms/x27y33z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, north, and west.%^RESET%^");
}
