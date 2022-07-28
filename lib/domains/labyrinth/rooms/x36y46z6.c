inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 46, 6 }));
  set_short( "Corridor - x36y46z6" );
set_objects( DIR+"/npc/weevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y46z6.c",
  "east" : DIR+"/rooms/x37y46z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the glorzo in this dump. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
