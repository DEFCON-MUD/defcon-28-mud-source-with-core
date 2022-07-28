inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 46, 6 }));
  set_short( "Passage - x7y46z6" );
set_objects( DIR+"/npc/biddleman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y46z6.c",
  "south" : DIR+"/rooms/x7y45z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the gunk in this joint. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
