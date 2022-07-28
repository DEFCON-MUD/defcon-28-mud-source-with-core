inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 54, 1 }));
  set_short( "Hallway - x27y54z1" );
set_objects( DIR+"/npc/billy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y54z1.c",
  "south" : DIR+"/rooms/x27y53z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
