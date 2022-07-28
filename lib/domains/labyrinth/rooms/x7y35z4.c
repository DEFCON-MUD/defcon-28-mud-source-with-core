inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 35, 4 }));
  set_short( "Passage - x7y35z4" );
set_objects( DIR+"/npc/stoner.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y36z4.c",
  "south" : DIR+"/rooms/x7y34z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the muck in this dump. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
