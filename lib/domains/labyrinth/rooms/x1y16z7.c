inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 16, 7 }));
  set_short( "Passage - x1y16z7" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y17z7.c",
  "south" : DIR+"/rooms/x1y15z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
