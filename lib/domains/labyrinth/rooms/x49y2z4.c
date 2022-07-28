inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 2, 4 }));
  set_short( "Corridor - x49y2z4" );
set_objects( DIR+"/npc/r1elaine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y2z4.c",
  "east" : DIR+"/rooms/x50y2z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
