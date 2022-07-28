inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 45, 2 }));
  set_short( "Hallway - x35y45z2" );
set_objects( DIR+"/npc/valerie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y46z2.c",
  "south" : DIR+"/rooms/x35y44z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the glorzo in this dump. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
