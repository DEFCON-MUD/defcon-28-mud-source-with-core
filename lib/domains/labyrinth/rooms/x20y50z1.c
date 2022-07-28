inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 50, 1 }));
  set_short( "Hallway - x20y50z1" );
set_objects( DIR+"/npc/repairdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y50z1.c",
  "east" : DIR+"/rooms/x21y50z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
