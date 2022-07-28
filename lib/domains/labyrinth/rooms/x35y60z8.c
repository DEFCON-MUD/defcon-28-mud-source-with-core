inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 60, 8 }));
  set_short( "Hallway - x35y60z8" );
set_objects( DIR+"/npc/weevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y60z8.c",
  "east" : DIR+"/rooms/x36y60z8.c",
  "north" : DIR+"/rooms/x35y61z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, east, and north.%^RESET%^");
}
