inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 64, 1 }));
  set_short( "Passage - x54y64z1" );
set_objects( DIR+"/npc/raddgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y64z1.c",
  "east" : DIR+"/rooms/x55y64z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the glorzo in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
