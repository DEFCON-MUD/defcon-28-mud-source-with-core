inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 9, 1 }));
  set_short( "Hallway - x25y9z1" );
set_objects( DIR+"/npc/wendy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y10z1.c",
  "south" : DIR+"/rooms/x25y8z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the sludge in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
