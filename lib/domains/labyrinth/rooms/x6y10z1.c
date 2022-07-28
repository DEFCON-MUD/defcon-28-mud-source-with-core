inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 10, 1 }));
  set_short( "Hallway - x6y10z1" );
set_objects( DIR+"/npc/maintenancedroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y10z1.c",
  "east" : DIR+"/rooms/x7y10z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the gunk in this stink-pit. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
