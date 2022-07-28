inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 35, 9 }));
  set_short( "Hallway - x61y35z9" );
set_objects( DIR+"/npc/ratqueen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y36z9.c",
  "south" : DIR+"/rooms/x61y34z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
