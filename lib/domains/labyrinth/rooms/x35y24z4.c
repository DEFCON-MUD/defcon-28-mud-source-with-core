inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 24, 4 }));
  set_short( "Hallway - x35y24z4" );
set_objects( DIR+"/npc/jeff.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y24z4.c",
  "north" : DIR+"/rooms/x35y25z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the random junk evilmog thought up in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
