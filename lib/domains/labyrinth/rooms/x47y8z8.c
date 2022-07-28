inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 8, 8 }));
  set_short( "Corridor - x47y8z8" );
set_objects( DIR+"/npc/anthonyfox.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y8z8.c",
  "north" : DIR+"/rooms/x47y9z8.c",
  "south" : DIR+"/rooms/x47y7z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, north, and west.%^RESET%^");
}
