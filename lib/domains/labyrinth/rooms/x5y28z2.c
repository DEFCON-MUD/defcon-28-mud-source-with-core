inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 28, 2 }));
  set_short( "Corridor - x5y28z2" );
set_objects( DIR+"/npc/goldfish.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y28z2.c",
  "east" : DIR+"/rooms/x6y28z2.c",
  "north" : DIR+"/rooms/x5y29z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the glorzo in this sty. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, east, and north.%^RESET%^");
}
