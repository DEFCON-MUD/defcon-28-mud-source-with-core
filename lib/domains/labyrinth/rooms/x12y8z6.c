inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 8, 6 }));
  set_short( "Corridor - x12y8z6" );
set_objects( DIR+"/npc/jackback.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y8z6.c",
  "east" : DIR+"/rooms/x13y8z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
