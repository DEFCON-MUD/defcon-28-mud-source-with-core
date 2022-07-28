inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 33, 7 }));
  set_short( "Hallway - x9y33z7" );
set_objects( DIR+"/npc/steve.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y34z7.c",
  "south" : DIR+"/rooms/x9y32z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the glorzo in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
