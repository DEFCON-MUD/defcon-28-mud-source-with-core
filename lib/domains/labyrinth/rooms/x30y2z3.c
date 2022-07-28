inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 2, 3 }));
  set_short( "Hallway - x30y2z3" );
set_objects( DIR+"/npc/hans.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y2z3.c",
  "east" : DIR+"/rooms/x31y2z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the glorzo in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
