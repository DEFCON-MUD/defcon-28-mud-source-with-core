inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 36, 3 }));
  set_short( "Hallway - x29y36z3" );
set_objects( DIR+"/npc/brian.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y36z3.c",
  "south" : DIR+"/rooms/x29y35z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the glorzo in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
