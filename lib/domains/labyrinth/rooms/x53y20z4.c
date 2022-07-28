inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 20, 4 }));
  set_short( "Hallway - x53y20z4" );
set_objects( DIR+"/npc/constrictor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y20z4.c",
  "south" : DIR+"/rooms/x53y19z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the muck in this sty. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
