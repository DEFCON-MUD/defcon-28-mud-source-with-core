inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 53, 6 }));
  set_short( "Passage - x17y53z6" );
set_objects( DIR+"/npc/wendy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y54z6.c",
  "south" : DIR+"/rooms/x17y52z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
