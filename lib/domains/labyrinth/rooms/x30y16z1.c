inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 16, 1 }));
  set_short( "Passage - x30y16z1" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y16z1.c",
  "east" : DIR+"/rooms/x31y16z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
