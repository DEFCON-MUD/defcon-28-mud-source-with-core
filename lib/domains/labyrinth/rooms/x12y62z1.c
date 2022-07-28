inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 62, 1 }));
  set_short( "Passage - x12y62z1" );
set_objects( DIR+"/npc/eastformatter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y62z1.c",
  "east" : DIR+"/rooms/x13y62z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the muck in this stink-pit. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
