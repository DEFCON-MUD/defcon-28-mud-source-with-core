inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 54, 5 }));
  set_short( "Hallway - x58y54z5" );
set_objects( DIR+"/npc/maintenancedroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y54z5.c",
  "east" : DIR+"/rooms/x59y54z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
