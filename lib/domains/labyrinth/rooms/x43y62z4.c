inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 62, 4 }));
  set_short( "Corridor - x43y62z4" );
set_objects( DIR+"/npc/rat.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y62z4.c",
  "south" : DIR+"/rooms/x43y61z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the gunk in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
