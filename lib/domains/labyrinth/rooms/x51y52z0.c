inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 52, 0 }));
  set_short( "Hallway - x51y52z0" );
set_objects( DIR+"/npc/koretech.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y52z0.c",
  "north" : DIR+"/rooms/x51y53z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
