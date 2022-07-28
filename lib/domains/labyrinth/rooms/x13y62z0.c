inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 62, 0 }));
  set_short( "Passage - x13y62z0" );
set_objects( DIR+"/npc/doe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y62z0.c",
  "east" : DIR+"/rooms/x14y62z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
