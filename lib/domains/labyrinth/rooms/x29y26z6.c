inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 26, 6 }));
  set_short( "Hallway - x29y26z6" );
set_objects( DIR+"/npc/droid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y26z6.c",
  "north" : DIR+"/rooms/x29y27z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
