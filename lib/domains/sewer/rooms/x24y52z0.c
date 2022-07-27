inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 52, 0 }));
  set_short( "Corridor - x24y52z0" );
set_objects( DIR+"/monsters/agent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y52z0.c",
  "east" : DIR+"/rooms/x25y52z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crap in this joint. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
