inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 36, 9 }));
  set_short( "Hallway - x39y36z9" );
set_objects( DIR+"/npc/bol.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y36z9.c",
  "north" : DIR+"/rooms/x39y37z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the glorzo in this stink-pit. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
