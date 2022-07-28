inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 24, 4 }));
  set_short( "Corridor - x11y24z4" );
set_objects( DIR+"/npc/manny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y24z4.c",
  "south" : DIR+"/rooms/x11y23z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crud in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
