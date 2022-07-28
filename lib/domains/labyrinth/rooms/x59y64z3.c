inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 64, 3 }));
  set_short( "Passage - x59y64z3" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y64z3.c",
  "east" : DIR+"/rooms/x60y64z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
