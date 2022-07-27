inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 0, 6 }));
  set_short( "Corridor - x10y0z6" );
set_objects( DIR+"/monsters/log.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y0z6.c",
  "east" : DIR+"/rooms/x11y0z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crap in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
