inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 62, 1 }));
  set_short( "Passage - x39y62z1" );
set_objects( DIR+"/npc/tech.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y62z1.c",
  "east" : DIR+"/rooms/x40y62z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
