inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 20, 3 }));
  set_short( "Passage - x41y20z3" );
set_objects( DIR+"/npc/loser.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y20z3.c",
  "north" : DIR+"/rooms/x41y21z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the radioactive waste in this sty. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
