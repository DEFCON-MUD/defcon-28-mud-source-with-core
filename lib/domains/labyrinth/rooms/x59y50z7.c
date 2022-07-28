inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 50, 7 }));
  set_short( "Passage - x59y50z7" );
set_objects( DIR+"/npc/mosquito.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y50z7.c",
  "south" : DIR+"/rooms/x59y49z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the glorzo in this stink-pit. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
