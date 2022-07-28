inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 9, 4 }));
  set_short( "Hallway - x37y9z4" );
set_objects( DIR+"/npc/torga.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y10z4.c",
  "south" : DIR+"/rooms/x37y8z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the glorzo in this stink-pit. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
