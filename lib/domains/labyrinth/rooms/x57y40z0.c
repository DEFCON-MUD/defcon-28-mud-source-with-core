inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 40, 0 }));
  set_short( "Hallway - x57y40z0" );
set_objects( DIR+"/npc/sandworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y40z0.c",
  "south" : DIR+"/rooms/x57y39z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
