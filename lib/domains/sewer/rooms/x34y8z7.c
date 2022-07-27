inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 8, 7 }));
  set_short( "Corridor - x34y8z7" );
set_objects( DIR+"/monsters/hkle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y8z7.c",
  "east" : DIR+"/rooms/x35y8z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
