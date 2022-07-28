inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 38, 9 }));
  set_short( "Hallway - x12y38z9" );
set_objects( DIR+"/npc/pasties.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y38z9.c",
  "east" : DIR+"/rooms/x13y38z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the sludge in this hellhole. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
