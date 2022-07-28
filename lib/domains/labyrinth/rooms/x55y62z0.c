inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 62, 0 }));
  set_short( "Hallway - x55y62z0" );
set_objects( DIR+"/npc/maintenancedroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y62z0.c",
  "south" : DIR+"/rooms/x55y61z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
