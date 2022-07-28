inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 64, 0 }));
  set_short( "Hallway - x21y64z0" );
set_objects( DIR+"/npc/housingofficer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y64z0.c",
  "east" : DIR+"/rooms/x22y64z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the glorzo in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
