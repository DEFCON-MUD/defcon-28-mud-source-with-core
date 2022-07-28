inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 8, 5 }));
  set_short( "Hallway - x39y8z5" );
set_objects( DIR+"/npc/maintenancedroid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y8z5.c",
  "south" : DIR+"/rooms/x39y7z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the sludge in this area. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
