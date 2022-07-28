inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 8, 1 }));
  set_short( "Passage - x49y8z1" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y8z1.c",
  "east" : DIR+"/rooms/x50y8z1.c",
  "north" : DIR+"/rooms/x49y9z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the radioactive waste in this stink-pit. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, east, and north.%^RESET%^");
}
