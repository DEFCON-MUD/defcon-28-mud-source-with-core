inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 14, 9 }));
  set_short( "Passage - x57y14z9" );
set_objects( DIR+"/npc/boa.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y14z9.c",
  "south" : DIR+"/rooms/x57y13z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the muck in this stink-pit. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
