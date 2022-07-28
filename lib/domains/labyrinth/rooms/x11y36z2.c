inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 36, 2 }));
  set_short( "Passage - x11y36z2" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y36z2.c",
  "north" : DIR+"/rooms/x11y37z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the sludge in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
