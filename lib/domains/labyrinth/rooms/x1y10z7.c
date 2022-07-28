inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 10, 7 }));
  set_short( "Corridor - x1y10z7" );
set_objects( DIR+"/npc/leader.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y11z7.c",
  "south" : DIR+"/rooms/x1y9z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the glorzo in this hellhole. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
