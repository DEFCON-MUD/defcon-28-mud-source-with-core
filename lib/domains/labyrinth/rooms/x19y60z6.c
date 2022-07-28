inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 60, 6 }));
  set_short( "Hallway - x19y60z6" );
set_objects( DIR+"/npc/fieldmouse.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y60z6.c",
  "south" : DIR+"/rooms/x19y59z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
