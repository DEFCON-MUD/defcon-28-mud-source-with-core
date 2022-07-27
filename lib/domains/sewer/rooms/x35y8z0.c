inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 8, 0 }));
  set_short( "Corridor - x35y8z0" );
set_objects( DIR+"/monsters/olasha.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y8z0.c",
  "south" : DIR+"/rooms/x35y7z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the sludge in this dump. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
