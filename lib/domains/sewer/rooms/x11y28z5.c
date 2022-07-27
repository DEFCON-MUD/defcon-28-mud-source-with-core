inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 28, 5 }));
  set_short( "Corridor - x11y28z5" );
set_objects( DIR+"/monsters/randy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y28z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the gunk in this hellhole. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east.%^RESET%^");
}
