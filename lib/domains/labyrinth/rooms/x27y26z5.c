inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 26, 5 }));
  set_short( "Passage - x27y26z5" );
set_objects( DIR+"/npc/debra.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y26z5.c",
  "south" : DIR+"/rooms/x27y25z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
