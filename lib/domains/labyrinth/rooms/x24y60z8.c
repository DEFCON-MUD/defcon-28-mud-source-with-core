inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 60, 8 }));
  set_short( "Corridor - x24y60z8" );
set_objects( DIR+"/npc/ferret.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y60z8.c",
  "east" : DIR+"/rooms/x25y60z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crud in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
