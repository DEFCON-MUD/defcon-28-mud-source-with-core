inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 52, 3 }));
  set_short( "Corridor - x55y52z3" );
set_objects( DIR+"/npc/leader.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y53z3.c",
  "south" : DIR+"/rooms/x55y51z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
