inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 33, 2 }));
  set_short( "Passage - x11y33z2" );
set_objects( DIR+"/npc/andy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y34z2.c",
  "south" : DIR+"/rooms/x11y32z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the gunk in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
