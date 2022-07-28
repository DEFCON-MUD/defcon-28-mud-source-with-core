inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 50, 1 }));
  set_short( "Passage - x41y50z1" );
set_objects( DIR+"/npc/vlarapp.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y50z1.c",
  "south" : DIR+"/rooms/x41y49z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
