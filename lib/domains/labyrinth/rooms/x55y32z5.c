inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 32, 5 }));
  set_short( "Hallway - x55y32z5" );
set_objects( DIR+"/npc/sewerboss.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y32z5.c",
  "south" : DIR+"/rooms/x55y31z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
