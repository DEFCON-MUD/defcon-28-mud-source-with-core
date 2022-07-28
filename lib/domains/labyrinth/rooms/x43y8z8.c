inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 8, 8 }));
  set_short( "Passage - x43y8z8" );
set_objects( DIR+"/npc/poledancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y8z8.c",
  "south" : DIR+"/rooms/x43y7z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the glorzo in this sty. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
