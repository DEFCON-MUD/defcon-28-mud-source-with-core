inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 26, 4 }));
  set_short( "Corridor - x57y26z4" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y26z4.c",
  "south" : DIR+"/rooms/x57y25z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
