inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 8, 3 }));
  set_short( "Corridor - x19y8z3" );
set_objects( DIR+"/npc/guard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y9z3.c",
  "south" : DIR+"/rooms/x19y7z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the glorzo in this dump. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
