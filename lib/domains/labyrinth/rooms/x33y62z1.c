inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 62, 1 }));
  set_short( "Passage - x33y62z1" );
set_objects( DIR+"/npc/vlarapp.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y62z1.c",
  "south" : DIR+"/rooms/x33y61z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the gunk in this sty. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
