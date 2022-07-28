inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 11, 5 }));
  set_short( "Hallway - x9y11z5" );
set_objects( DIR+"/npc/cyberslime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y12z5.c",
  "south" : DIR+"/rooms/x9y10z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
