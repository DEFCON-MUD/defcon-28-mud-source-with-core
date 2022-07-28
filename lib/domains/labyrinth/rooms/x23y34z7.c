inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 34, 7 }));
  set_short( "Passage - x23y34z7" );
set_objects( DIR+"/npc/clerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y34z7.c",
  "east" : DIR+"/rooms/x24y34z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
