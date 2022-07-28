inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 4, 1 }));
  set_short( "Passage - x19y4z1" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y4z1.c",
  "north" : DIR+"/rooms/x19y5z1.c",
  "south" : DIR+"/rooms/x19y3z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the glorzo in this hellhole. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, north, and west.%^RESET%^");
}
