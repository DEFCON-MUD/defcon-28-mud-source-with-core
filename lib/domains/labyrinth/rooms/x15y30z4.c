inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 30, 4 }));
  set_short( "Corridor - x15y30z4" );
set_objects( DIR+"/npc/fieldmouse.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y31z4.c",
  "south" : DIR+"/rooms/x15y29z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the sludge in this dump. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
