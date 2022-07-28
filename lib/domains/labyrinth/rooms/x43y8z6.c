inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 8, 6 }));
  set_short( "Passage - x43y8z6" );
set_objects( DIR+"/npc/prisonguard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y8z6.c",
  "north" : DIR+"/rooms/x43y9z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
