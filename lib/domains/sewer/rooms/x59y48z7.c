inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 48, 7 }));
  set_short( "Corridor - x59y48z7" );
set_objects( DIR+"/monsters/job.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y48z7.c",
  "north" : DIR+"/rooms/x59y49z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crappy sales material in this dump. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
