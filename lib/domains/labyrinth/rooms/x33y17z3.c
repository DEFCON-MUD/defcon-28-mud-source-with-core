inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 17, 3 }));
  set_short( "Hallway - x33y17z3" );
set_objects( DIR+"/npc/valerie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y18z3.c",
  "south" : DIR+"/rooms/x33y16z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the gunk in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
