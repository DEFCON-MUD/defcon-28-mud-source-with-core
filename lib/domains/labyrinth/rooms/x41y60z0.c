inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 60, 0 }));
  set_short( "Hallway - x41y60z0" );
set_objects( DIR+"/npc/vonnewman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y61z0.c",
  "south" : DIR+"/rooms/x41y59z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
