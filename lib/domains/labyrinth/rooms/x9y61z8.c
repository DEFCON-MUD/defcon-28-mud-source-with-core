inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 61, 8 }));
  set_short( "Passage - x9y61z8" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y62z8.c",
  "south" : DIR+"/rooms/x9y60z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the muck in this hellhole. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
