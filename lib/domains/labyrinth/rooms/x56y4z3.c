inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 4, 3 }));
  set_short( "Hallway - x56y4z3" );
set_objects( DIR+"/npc/shelledheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y4z3.c",
  "east" : DIR+"/rooms/x57y4z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
