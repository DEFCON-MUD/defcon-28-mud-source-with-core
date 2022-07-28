inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 46, 8 }));
  set_short( "Corridor - x25y46z8" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y46z8.c",
  "north" : DIR+"/rooms/x25y47z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the sludge in this dump. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
