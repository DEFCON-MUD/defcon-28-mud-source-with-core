inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 11, 2 }));
  set_short( "Passage - x45y11z2" );
set_objects( DIR+"/npc/wendall.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y12z2.c",
  "south" : DIR+"/rooms/x45y10z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the gunk in this joint. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
