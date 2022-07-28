inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 20, 3 }));
  set_short( "Hallway - x39y20z3" );
set_objects( DIR+"/npc/johnson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y20z3.c",
  "north" : DIR+"/rooms/x39y21z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
