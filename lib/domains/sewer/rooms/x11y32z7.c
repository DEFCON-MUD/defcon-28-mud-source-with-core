inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 32, 7 }));
  set_short( "Passage - x11y32z7" );
set_objects( DIR+"/monsters/slowzombie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y33z7.c",
  "south" : DIR+"/rooms/x11y31z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crud in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
