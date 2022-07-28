inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 36, 1 }));
  set_short( "Passage - x46y36z1" );
set_objects( DIR+"/npc/poledancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y36z1.c",
  "east" : DIR+"/rooms/x47y36z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crap in this joint. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
