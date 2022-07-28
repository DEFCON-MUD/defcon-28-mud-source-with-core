inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 18, 3 }));
  set_short( "Passage - x18y18z3" );
set_objects( DIR+"/npc/roger.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y18z3.c",
  "east" : DIR+"/rooms/x19y18z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
