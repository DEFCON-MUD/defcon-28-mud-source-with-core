inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 64, 3 }));
  set_short( "Corridor - x32y64z3" );
set_objects( DIR+"/npc/john.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y64z3.c",
  "east" : DIR+"/rooms/x33y64z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
