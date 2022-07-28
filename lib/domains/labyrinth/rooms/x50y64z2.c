inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 64, 2 }));
  set_short( "Hallway - x50y64z2" );
set_objects( DIR+"/npc/largeheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y64z2.c",
  "east" : DIR+"/rooms/x51y64z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
