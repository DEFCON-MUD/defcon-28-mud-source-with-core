inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 58, 2 }));
  set_short( "Corridor - x19y58z2" );
set_objects( DIR+"/monsters/edwardio.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y58z2.c",
  "south" : DIR+"/rooms/x19y57z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crud in this joint. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
