inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 50, 8 }));
  set_short( "Corridor - x19y50z8" );
set_objects( DIR+"/npc/banker.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y50z8.c",
  "north" : DIR+"/rooms/x19y51z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
