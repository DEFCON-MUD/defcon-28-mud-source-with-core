inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 0, 7 }));
  set_short( "Passage - x53y0z7" );
set_objects( DIR+"/monsters/clubdaer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y0z7.c",
  "east" : DIR+"/rooms/x54y0z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the glorzo in this dump. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
