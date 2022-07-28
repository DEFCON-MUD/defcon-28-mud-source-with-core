inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 58, 8 }));
  set_short( "Hallway - x39y58z8" );
set_objects( DIR+"/npc/bouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y58z8.c",
  "east" : DIR+"/rooms/x40y58z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the glorzo in this sty. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
