inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 50, 4 }));
  set_short( "Passage - x43y50z4" );
set_objects( DIR+"/npc/gorilla.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y50z4.c",
  "south" : DIR+"/rooms/x43y49z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the muck in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
