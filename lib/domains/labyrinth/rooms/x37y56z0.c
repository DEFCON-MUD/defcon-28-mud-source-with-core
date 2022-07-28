inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 56, 0 }));
  set_short( "Corridor - x37y56z0" );
set_objects( DIR+"/npc/banker.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y56z0.c",
  "east" : DIR+"/rooms/x38y56z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
