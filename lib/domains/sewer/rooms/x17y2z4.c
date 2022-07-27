inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 2, 4 }));
  set_short( "Hallway - x17y2z4" );
set_objects( DIR+"/monsters/er.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y2z4.c",
  "east" : DIR+"/rooms/x18y2z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the gunk in this stink-pit. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
