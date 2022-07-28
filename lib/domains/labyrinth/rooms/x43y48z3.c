inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 48, 3 }));
  set_short( "Passage - x43y48z3" );
set_objects( DIR+"/npc/wendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y48z3.c",
  "east" : DIR+"/rooms/x44y48z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
