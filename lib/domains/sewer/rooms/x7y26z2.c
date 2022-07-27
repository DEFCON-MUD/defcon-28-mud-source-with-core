inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 26, 2 }));
  set_short( "Passage - x7y26z2" );
set_objects( DIR+"/monsters/salik.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y26z2.c",
  "south" : DIR+"/rooms/x7y25z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the glorzo in this dump. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
