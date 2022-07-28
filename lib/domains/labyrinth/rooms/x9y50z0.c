inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 50, 0 }));
  set_short( "Passage - x9y50z0" );
set_objects( DIR+"/npc/maintainer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y50z0.c",
  "north" : DIR+"/rooms/x9y51z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
