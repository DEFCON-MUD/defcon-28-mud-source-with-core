inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 9, 8 }));
  set_short( "Corridor - x1y9z8" );
set_objects( DIR+"/npc/blob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y10z8.c",
  "south" : DIR+"/rooms/x1y8z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crud in this area. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
