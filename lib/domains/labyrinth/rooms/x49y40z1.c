inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 40, 1 }));
  set_short( "Passage - x49y40z1" );
set_objects( DIR+"/npc/python.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y41z1.c",
  "south" : DIR+"/rooms/x49y39z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crap in this dump. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
