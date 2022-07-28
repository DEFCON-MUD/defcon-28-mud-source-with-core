inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 58, 8 }));
  set_short( "Corridor - x27y58z8" );
set_objects( DIR+"/npc/outfitterrobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y58z8.c",
  "east" : DIR+"/rooms/x28y58z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
