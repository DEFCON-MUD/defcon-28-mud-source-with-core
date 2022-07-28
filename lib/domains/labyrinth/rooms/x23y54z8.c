inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 54, 8 }));
  set_short( "Hallway - x23y54z8" );
set_objects( DIR+"/npc/fern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y54z8.c",
  "south" : DIR+"/rooms/x23y53z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the glorzo in this hellhole. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
