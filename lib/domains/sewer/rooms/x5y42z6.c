inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 42, 6 }));
  set_short( "Corridor - x5y42z6" );
set_objects( DIR+"/monsters/r1serveman.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y42z6.c",
  "north" : DIR+"/rooms/x5y43z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
