inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 10, 9 }));
  set_short( "Passage - x29y10z9" );
set_objects( DIR+"/npc/queenslug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y10z9.c",
  "south" : DIR+"/rooms/x29y9z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the sludge in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
