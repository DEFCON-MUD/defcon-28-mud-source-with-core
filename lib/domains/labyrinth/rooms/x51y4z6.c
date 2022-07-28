inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 4, 6 }));
  set_short( "Passage - x51y4z6" );
set_objects( DIR+"/npc/wellin.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y4z6.c",
  "north" : DIR+"/rooms/x51y5z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
