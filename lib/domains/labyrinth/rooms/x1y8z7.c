inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 8, 7 }));
  set_short( "Passage - x1y8z7" );
set_objects( DIR+"/npc/raddyzoon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y8z7.c",
  "north" : DIR+"/rooms/x1y9z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
