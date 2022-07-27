inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 38, 8 }));
  set_short( "Hallway - x35y38z8" );
set_objects( DIR+"/monsters/outfitterrobot.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y38z8.c",
  "south" : DIR+"/rooms/x35y37z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
