inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 15, 1 }));
  set_short( "Passage - x43y15z1" );
set_objects( DIR+"/npc/massiveweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y16z1.c",
  "south" : DIR+"/rooms/x43y14z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the gunk in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
