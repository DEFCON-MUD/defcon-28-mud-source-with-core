inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 16, 0 }));
  set_short( "Corridor - x5y16z0" );
set_objects( DIR+"/npc/maintenancedroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y17z0.c",
  "south" : DIR+"/rooms/x5y15z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
