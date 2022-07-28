inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 22, 2 }));
  set_short( "Passage - x59y22z2" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y22z2.c",
  "south" : DIR+"/rooms/x59y21z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crud in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
