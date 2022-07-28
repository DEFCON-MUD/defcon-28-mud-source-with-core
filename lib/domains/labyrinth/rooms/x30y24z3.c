inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 24, 3 }));
  set_short( "Corridor - x30y24z3" );
set_objects( DIR+"/npc/floorvine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y24z3.c",
  "east" : DIR+"/rooms/x31y24z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crappy sales material in this sty. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
