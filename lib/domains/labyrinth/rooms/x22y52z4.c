inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 52, 4 }));
  set_short( "Passage - x22y52z4" );
set_objects( DIR+"/npc/heptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y52z4.c",
  "east" : DIR+"/rooms/x23y52z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the glorzo in this area. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
