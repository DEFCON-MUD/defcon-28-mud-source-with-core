inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 25, 0 }));
  set_short( "Corridor - x23y25z0" );
set_objects( DIR+"/npc/john.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y26z0.c",
  "south" : DIR+"/rooms/x23y24z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crap in this joint. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
