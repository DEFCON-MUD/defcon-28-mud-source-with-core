inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 14, 1 }));
  set_short( "Passage - x41y14z1" );
set_objects( DIR+"/npc/r1alan.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y14z1.c",
  "north" : DIR+"/rooms/x41y15z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the glorzo in this dump. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
