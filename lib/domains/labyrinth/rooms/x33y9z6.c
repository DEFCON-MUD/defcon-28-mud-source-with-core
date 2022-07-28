inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 9, 6 }));
  set_short( "Hallway - x33y9z6" );
set_objects( DIR+"/npc/mosquito.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y10z6.c",
  "south" : DIR+"/rooms/x33y8z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the sludge in this stink-pit. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
