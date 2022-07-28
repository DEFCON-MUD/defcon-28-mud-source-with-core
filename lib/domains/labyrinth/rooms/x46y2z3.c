inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 2, 3 }));
  set_short( "Hallway - x46y2z3" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y2z3.c",
  "east" : DIR+"/rooms/x47y2z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crappy sales material in this sty. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
