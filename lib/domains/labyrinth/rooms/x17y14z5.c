inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 14, 5 }));
  set_short( "Corridor - x17y14z5" );
set_objects( DIR+"/npc/maintenancedroid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y14z5.c",
  "north" : DIR+"/rooms/x17y15z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the muck in this sty. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
