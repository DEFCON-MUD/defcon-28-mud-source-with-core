inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 26, 4 }));
  set_short( "Passage - x45y26z4" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y26z4.c",
  "east" : DIR+"/rooms/x46y26z4.c",
  "north" : DIR+"/rooms/x45y27z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the glorzo in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, east, and north.%^RESET%^");
}
