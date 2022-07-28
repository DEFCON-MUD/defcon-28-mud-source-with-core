inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 2, 3 }));
  set_short( "Hallway - x16y2z3" );
set_objects( DIR+"/npc/professor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y2z3.c",
  "east" : DIR+"/rooms/x17y2z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
