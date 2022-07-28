inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 12, 0 }));
  set_short( "Passage - x17y12z0" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y13z0.c",
  "south" : DIR+"/rooms/x17y11z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
