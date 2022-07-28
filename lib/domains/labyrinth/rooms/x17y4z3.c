inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 4, 3 }));
  set_short( "Passage - x17y4z3" );
set_objects( DIR+"/npc/neelo.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y4z3.c",
  "north" : DIR+"/rooms/x17y5z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
