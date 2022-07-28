inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 46, 1 }));
  set_short( "Corridor - x25y46z1" );
set_objects( DIR+"/npc/colleen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y46z1.c",
  "north" : DIR+"/rooms/x25y47z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the gunk in this hellhole. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
