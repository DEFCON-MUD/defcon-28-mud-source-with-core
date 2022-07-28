inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 14, 0 }));
  set_short( "Passage - x46y14z0" );
set_objects( DIR+"/npc/autobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y14z0.c",
  "east" : DIR+"/rooms/x47y14z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
