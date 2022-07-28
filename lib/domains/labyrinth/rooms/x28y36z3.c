inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 36, 3 }));
  set_short( "Passage - x28y36z3" );
set_objects( DIR+"/npc/zombie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y36z3.c",
  "east" : DIR+"/rooms/x29y36z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the glorzo in this dump. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
