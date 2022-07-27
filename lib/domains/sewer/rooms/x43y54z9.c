inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 54, 9 }));
  set_short( "Corridor - x43y54z9" );
set_objects( DIR+"/monsters/olasha.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y54z9.c",
  "south" : DIR+"/rooms/x43y53z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the glorzo in this dump. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
