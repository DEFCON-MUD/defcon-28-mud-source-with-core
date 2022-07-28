inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 32, 2 }));
  set_short( "Passage - x11y32z2" );
set_objects( DIR+"/npc/wendall.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y32z2.c",
  "north" : DIR+"/rooms/x11y33z2.c",
  "south" : DIR+"/rooms/x11y31z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the radioactive waste in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, north, and west.%^RESET%^");
}
