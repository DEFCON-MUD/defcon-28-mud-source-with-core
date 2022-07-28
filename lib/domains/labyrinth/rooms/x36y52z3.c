inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 52, 3 }));
  set_short( "Corridor - x36y52z3" );
set_objects( DIR+"/npc/officer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y52z3.c",
  "east" : DIR+"/rooms/x37y52z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the glorzo in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
