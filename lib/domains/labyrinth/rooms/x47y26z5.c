inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 26, 5 }));
  set_short( "Passage - x47y26z5" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y26z5.c",
  "south" : DIR+"/rooms/x47y25z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crappy sales material in this joint. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
