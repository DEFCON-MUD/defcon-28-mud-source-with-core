inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 64, 3 }));
  set_short( "Hallway - x43y64z3" );
set_objects( DIR+"/monsters/greensnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y64z3.c",
  "east" : DIR+"/rooms/x44y64z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
