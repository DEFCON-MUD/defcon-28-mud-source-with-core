inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 44, 6 }));
  set_short( "Corridor - x22y44z6" );
set_objects( DIR+"/npc/heckle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y44z6.c",
  "east" : DIR+"/rooms/x23y44z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the sludge in this sty. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
