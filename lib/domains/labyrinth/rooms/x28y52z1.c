inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 52, 1 }));
  set_short( "Passage - x28y52z1" );
set_objects( DIR+"/npc/maintainer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y52z1.c",
  "east" : DIR+"/rooms/x29y52z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the gunk in this joint. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
