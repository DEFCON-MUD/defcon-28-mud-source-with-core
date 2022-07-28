inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 60, 9 }));
  set_short( "Passage - x9y60z9" );
set_objects( DIR+"/npc/auditor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y60z9.c",
  "north" : DIR+"/rooms/x9y61z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the sludge in this joint. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
