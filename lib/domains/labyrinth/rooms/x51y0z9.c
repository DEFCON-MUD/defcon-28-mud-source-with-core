inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 0, 9 }));
  set_short( "Passage - x51y0z9" );
set_objects( DIR+"/npc/zombie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y0z9.c",
  "east" : DIR+"/rooms/x52y0z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crap in this dump. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
