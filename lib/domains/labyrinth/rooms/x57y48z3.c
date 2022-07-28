inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 48, 3 }));
  set_short( "Corridor - x57y48z3" );
set_objects( DIR+"/npc/ratqueen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y48z3.c",
  "east" : DIR+"/rooms/x58y48z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the sludge in this sty. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
