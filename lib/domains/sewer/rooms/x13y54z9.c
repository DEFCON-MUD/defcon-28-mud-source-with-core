inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 54, 9 }));
  set_short( "Passage - x13y54z9" );
set_objects( DIR+"/monsters/snapperjaw.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y54z9.c",
  "east" : DIR+"/rooms/x14y54z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the glorzo in this joint. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
