inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 48, 7 }));
  set_short( "Corridor - x3y48z7" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y49z7.c",
  "south" : DIR+"/rooms/x3y47z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
