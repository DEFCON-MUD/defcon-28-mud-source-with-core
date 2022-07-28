inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 15, 3 }));
  set_short( "Passage - x39y15z3" );
set_objects( DIR+"/npc/norman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y16z3.c",
  "south" : DIR+"/rooms/x39y14z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
