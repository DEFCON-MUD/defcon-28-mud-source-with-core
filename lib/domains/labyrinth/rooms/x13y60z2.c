inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 60, 2 }));
  set_short( "Corridor - x13y60z2" );
set_objects( DIR+"/npc/brian.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y60z2.c",
  "north" : DIR+"/rooms/x13y61z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
