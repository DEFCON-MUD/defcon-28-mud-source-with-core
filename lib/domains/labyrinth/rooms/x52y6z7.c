inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 6, 7 }));
  set_short( "Passage - x52y6z7" );
set_objects( DIR+"/npc/heckle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y6z7.c",
  "east" : DIR+"/rooms/x53y6z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the gunk in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
