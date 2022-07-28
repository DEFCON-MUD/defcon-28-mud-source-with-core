inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 28, 4 }));
  set_short( "Passage - x12y28z4" );
set_objects( DIR+"/npc/cyclophant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y28z4.c",
  "east" : DIR+"/rooms/x13y28z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the sludge in this dump. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
