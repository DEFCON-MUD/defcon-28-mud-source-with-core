inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 11, 9 }));
  set_short( "Hallway - x35y11z9" );
set_objects( DIR+"/npc/snake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y12z9.c",
  "south" : DIR+"/rooms/x35y10z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the random junk evilmog thought up in this sty. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
