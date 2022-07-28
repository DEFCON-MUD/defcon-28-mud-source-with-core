inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 44, 3 }));
  set_short( "Hallway - x23y44z3" );
set_objects( DIR+"/npc/carson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y44z3.c",
  "east" : DIR+"/rooms/x24y44z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
