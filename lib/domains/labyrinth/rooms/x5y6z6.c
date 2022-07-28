inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 6, 6 }));
  set_short( "Corridor - x5y6z6" );
set_objects( DIR+"/npc/autobot.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y7z6.c",
  "south" : DIR+"/rooms/x5y5z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crappy sales material in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
