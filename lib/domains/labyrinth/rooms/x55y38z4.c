inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 38, 4 }));
  set_short( "Passage - x55y38z4" );
set_objects( DIR+"/npc/bugsy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y38z4.c",
  "north" : DIR+"/rooms/x55y39z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crap in this sty. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
