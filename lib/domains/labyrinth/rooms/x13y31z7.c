inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 31, 7 }));
  set_short( "Hallway - x13y31z7" );
set_objects( DIR+"/npc/sewerboss.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y32z7.c",
  "south" : DIR+"/rooms/x13y30z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the gunk in this joint. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
