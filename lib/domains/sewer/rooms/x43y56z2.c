inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 56, 2 }));
  set_short( "Passage - x43y56z2" );
set_objects( DIR+"/monsters/maintenaedroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y56z2.c",
  "east" : DIR+"/rooms/x44y56z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the radioactive waste in this stink-pit. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
