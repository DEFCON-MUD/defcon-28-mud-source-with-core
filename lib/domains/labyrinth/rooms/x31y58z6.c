inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 58, 6 }));
  set_short( "Hallway - x31y58z6" );
set_objects( DIR+"/npc/johnson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y58z6.c",
  "south" : DIR+"/rooms/x31y57z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
