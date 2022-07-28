inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 52, 2 }));
  set_short( "Hallway - x43y52z2" );
set_objects( DIR+"/npc/sewerboss.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y52z2.c",
  "south" : DIR+"/rooms/x43y51z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the glorzo in this joint. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
