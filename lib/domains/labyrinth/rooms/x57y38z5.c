inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 38, 5 }));
  set_short( "Corridor - x57y38z5" );
set_objects( DIR+"/npc/monzema.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y38z5.c",
  "east" : DIR+"/rooms/x58y38z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the glorzo in this joint. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
