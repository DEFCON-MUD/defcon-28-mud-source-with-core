inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 31, 5 }));
  set_short( "Hallway - x19y31z5" );
set_objects( DIR+"/npc/tawny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y32z5.c",
  "south" : DIR+"/rooms/x19y30z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the gunk in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
