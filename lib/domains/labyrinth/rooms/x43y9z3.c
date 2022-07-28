inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 9, 3 }));
  set_short( "Hallway - x43y9z3" );
set_objects( DIR+"/npc/slug.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y10z3.c",
  "south" : DIR+"/rooms/x43y8z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the gunk in this sty. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
