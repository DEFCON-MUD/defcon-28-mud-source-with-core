inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 44, 7 }));
  set_short( "Passage - x19y44z7" );
set_objects( DIR+"/npc/vampire.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y44z7.c",
  "north" : DIR+"/rooms/x19y45z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
