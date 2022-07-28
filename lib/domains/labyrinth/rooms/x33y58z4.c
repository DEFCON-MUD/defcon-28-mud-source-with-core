inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 58, 4 }));
  set_short( "Corridor - x33y58z4" );
set_objects( DIR+"/npc/monitor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y58z4.c",
  "north" : DIR+"/rooms/x33y59z4.c",
  "south" : DIR+"/rooms/x33y57z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
