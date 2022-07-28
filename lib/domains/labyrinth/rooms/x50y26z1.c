inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 26, 1 }));
  set_short( "Passage - x50y26z1" );
set_objects( DIR+"/npc/bartender.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y26z1.c",
  "east" : DIR+"/rooms/x51y26z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crap in this area. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
