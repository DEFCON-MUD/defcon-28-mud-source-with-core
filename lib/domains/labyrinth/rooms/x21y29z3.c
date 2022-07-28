inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 29, 3 }));
  set_short( "Passage - x21y29z3" );
set_objects( DIR+"/npc/tech.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y30z3.c",
  "south" : DIR+"/rooms/x21y28z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the radioactive waste in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
