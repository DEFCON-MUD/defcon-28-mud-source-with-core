inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 49, 5 }));
  set_short( "Passage - x19y49z5" );
set_objects( DIR+"/npc/bob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y50z5.c",
  "south" : DIR+"/rooms/x19y48z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
