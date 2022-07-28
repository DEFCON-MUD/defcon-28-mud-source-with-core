inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 0, 6 }));
  set_short( "Hallway - x7y0z6" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y0z6.c",
  "east" : DIR+"/rooms/x8y0z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
