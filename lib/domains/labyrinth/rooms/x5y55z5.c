inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 55, 5 }));
  set_short( "Corridor - x5y55z5" );
set_objects( DIR+"/npc/johnson.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y56z5.c",
  "south" : DIR+"/rooms/x5y54z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the muck in this dump. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
