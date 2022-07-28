inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 6, 3 }));
  set_short( "Hallway - x48y6z3" );
set_objects( DIR+"/npc/olasha.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y6z3.c",
  "east" : DIR+"/rooms/x49y6z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
