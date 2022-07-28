inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 43, 6 }));
  set_short( "Passage - x61y43z6" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y44z6.c",
  "south" : DIR+"/rooms/x61y42z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crud in this stink-pit. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
