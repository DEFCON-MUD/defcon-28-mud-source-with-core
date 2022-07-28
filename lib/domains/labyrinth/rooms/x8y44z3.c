inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 44, 3 }));
  set_short( "Passage - x8y44z3" );
set_objects( DIR+"/npc/r1elaine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y44z3.c",
  "east" : DIR+"/rooms/x9y44z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the gunk in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
