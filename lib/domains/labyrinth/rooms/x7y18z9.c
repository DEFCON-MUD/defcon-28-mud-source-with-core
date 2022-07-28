inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 18, 9 }));
  set_short( "Passage - x7y18z9" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y18z9.c",
  "east" : DIR+"/rooms/x8y18z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
