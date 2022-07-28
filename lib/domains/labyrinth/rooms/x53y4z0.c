inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 4, 0 }));
  set_short( "Passage - x53y4z0" );
set_objects( DIR+"/npc/jeff.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y4z0.c",
  "south" : DIR+"/rooms/x53y3z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the glorzo in this joint. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
