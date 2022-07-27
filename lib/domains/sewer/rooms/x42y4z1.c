inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 4, 1 }));
  set_short( "Corridor - x42y4z1" );
set_objects( DIR+"/monsters/repairdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y4z1.c",
  "east" : DIR+"/rooms/x43y4z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crud in this stink-pit. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
