inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 14, 0 }));
  set_short( "Hallway - x38y14z0" );
set_objects( DIR+"/npc/greenslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y14z0.c",
  "east" : DIR+"/rooms/x39y14z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
