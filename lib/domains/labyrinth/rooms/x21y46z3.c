inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 46, 3 }));
  set_short( "Hallway - x21y46z3" );
set_objects( DIR+"/npc/doe.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y46z3.c",
  "south" : DIR+"/rooms/x21y45z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the sludge in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
