inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 57, 0 }));
  set_short( "Hallway - x45y57z0" );
set_objects( DIR+"/npc/varysstark.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y58z0.c",
  "south" : DIR+"/rooms/x45y56z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the sludge in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
