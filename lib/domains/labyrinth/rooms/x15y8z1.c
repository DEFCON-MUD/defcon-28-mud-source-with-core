inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 8, 1 }));
  set_short( "Passage - x15y8z1" );
set_objects( DIR+"/npc/probe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y8z1.c",
  "north" : DIR+"/rooms/x15y9z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the gunk in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
