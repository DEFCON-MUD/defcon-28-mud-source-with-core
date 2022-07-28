inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 11, 2 }));
  set_short( "Hallway - x21y11z2" );
set_objects( DIR+"/npc/buddypetersen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y12z2.c",
  "south" : DIR+"/rooms/x21y10z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the gunk in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
