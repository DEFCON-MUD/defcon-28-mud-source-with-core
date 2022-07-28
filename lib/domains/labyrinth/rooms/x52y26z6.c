inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 26, 6 }));
  set_short( "Hallway - x52y26z6" );
set_objects( DIR+"/npc/slug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y26z6.c",
  "east" : DIR+"/rooms/x53y26z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
