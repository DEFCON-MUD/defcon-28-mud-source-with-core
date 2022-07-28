inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 0, 9 }));
  set_short( "Corridor - x50y0z9" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y0z9.c",
  "east" : DIR+"/rooms/x51y0z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
