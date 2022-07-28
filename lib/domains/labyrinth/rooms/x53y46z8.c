inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 46, 8 }));
  set_short( "Hallway - x53y46z8" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y46z8.c",
  "east" : DIR+"/rooms/x54y46z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the glorzo in this sty. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
