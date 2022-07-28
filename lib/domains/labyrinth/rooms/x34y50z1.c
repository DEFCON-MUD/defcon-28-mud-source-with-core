inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 50, 1 }));
  set_short( "Corridor - x34y50z1" );
set_objects( DIR+"/npc/slowzombie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y50z1.c",
  "east" : DIR+"/rooms/x35y50z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the gunk in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
