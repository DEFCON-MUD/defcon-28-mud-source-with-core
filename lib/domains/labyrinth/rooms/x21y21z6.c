inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 21, 6 }));
  set_short( "Hallway - x21y21z6" );
set_objects( DIR+"/npc/wasteworm.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y22z6.c",
  "south" : DIR+"/rooms/x21y20z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
