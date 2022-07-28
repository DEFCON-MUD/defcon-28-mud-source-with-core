inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 50, 2 }));
  set_short( "Hallway - x20y50z2" );
set_objects( DIR+"/npc/northdomeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y50z2.c",
  "east" : DIR+"/rooms/x21y50z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
