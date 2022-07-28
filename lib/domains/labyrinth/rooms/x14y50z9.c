inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 50, 9 }));
  set_short( "Hallway - x14y50z9" );
set_objects( DIR+"/npc/maintenancedroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y50z9.c",
  "east" : DIR+"/rooms/x15y50z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the muck in this stink-pit. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
