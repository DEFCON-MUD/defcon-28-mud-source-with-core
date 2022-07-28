inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 12, 6 }));
  set_short( "Passage - x35y12z6" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y12z6.c",
  "south" : DIR+"/rooms/x35y11z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crap in this joint. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
