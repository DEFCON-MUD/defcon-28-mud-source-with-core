inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 21, 5 }));
  set_short( "Hallway - x59y21z5" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y22z5.c",
  "south" : DIR+"/rooms/x59y20z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
