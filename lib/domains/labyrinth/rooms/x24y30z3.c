inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 30, 3 }));
  set_short( "Passage - x24y30z3" );
set_objects( DIR+"/npc/cscccaptain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y30z3.c",
  "east" : DIR+"/rooms/x25y30z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crap in this area. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
