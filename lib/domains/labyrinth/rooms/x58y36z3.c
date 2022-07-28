inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 36, 3 }));
  set_short( "Hallway - x58y36z3" );
set_objects( DIR+"/npc/cellguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y36z3.c",
  "east" : DIR+"/rooms/x59y36z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the gunk in this dump. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
