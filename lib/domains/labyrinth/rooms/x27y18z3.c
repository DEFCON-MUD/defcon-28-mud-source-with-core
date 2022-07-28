inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 18, 3 }));
  set_short( "Passage - x27y18z3" );
set_objects( DIR+"/npc/python.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y18z3.c",
  "south" : DIR+"/rooms/x27y17z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
