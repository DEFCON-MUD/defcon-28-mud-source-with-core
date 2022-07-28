inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 8, 4 }));
  set_short( "Hallway - x46y8z4" );
set_objects( DIR+"/npc/log.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y8z4.c",
  "east" : DIR+"/rooms/x47y8z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the sludge in this area. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
