inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 48, 8 }));
  set_short( "Passage - x27y48z8" );
set_objects( DIR+"/monsters/goon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y48z8.c",
  "north" : DIR+"/rooms/x27y49z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
