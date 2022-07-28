inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 34, 3 }));
  set_short( "Hallway - x46y34z3" );
set_objects( DIR+"/npc/domeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y34z3.c",
  "east" : DIR+"/rooms/x47y34z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the gunk in this area. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
