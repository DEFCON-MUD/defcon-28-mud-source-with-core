inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 9, 4 }));
  set_short( "Corridor - x35y9z4" );
set_objects( DIR+"/npc/prisonguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y10z4.c",
  "south" : DIR+"/rooms/x35y8z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the sludge in this area. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
