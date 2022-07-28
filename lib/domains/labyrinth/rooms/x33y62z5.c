inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 62, 5 }));
  set_short( "Passage - x33y62z5" );
set_objects( DIR+"/npc/blob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y62z5.c",
  "south" : DIR+"/rooms/x33y61z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
