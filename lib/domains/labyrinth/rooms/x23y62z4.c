inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 62, 4 }));
  set_short( "Passage - x23y62z4" );
set_objects( DIR+"/npc/wendall.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y62z4.c",
  "south" : DIR+"/rooms/x23y61z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
