inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 26, 4 }));
  set_short( "Passage - x53y26z4" );
set_objects( DIR+"/npc/cscccaptain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y26z4.c",
  "south" : DIR+"/rooms/x53y25z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crud in this dump. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
