inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 59, 8 }));
  set_short( "Corridor - x17y59z8" );
set_objects( DIR+"/npc/child.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y60z8.c",
  "south" : DIR+"/rooms/x17y58z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the sludge in this hellhole. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
