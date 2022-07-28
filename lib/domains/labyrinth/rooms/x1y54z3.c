inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 54, 3 }));
  set_short( "Hallway - x1y54z3" );
set_objects( DIR+"/npc/slowzombie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y54z3.c",
  "south" : DIR+"/rooms/x1y53z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crap in this sty. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
