inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 40, 9 }));
  set_short( "Hallway - x1y40z9" );
set_objects( DIR+"/npc/doe.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y41z9.c",
  "south" : DIR+"/rooms/x1y39z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
