inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 14, 3 }));
  set_short( "Corridor - x27y14z3" );
set_objects( DIR+"/npc/constrictor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y14z3.c",
  "east" : DIR+"/rooms/x28y14z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the glorzo in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
