inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 42, 1 }));
  set_short( "Corridor - x57y42z1" );
set_objects( DIR+"/npc/clubbouncer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y42z1.c",
  "north" : DIR+"/rooms/x57y43z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
