inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 18, 9 }));
  set_short( "Corridor - x7y18z9" );
set_objects( DIR+"/monsters/kavi.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y18z9.c",
  "east" : DIR+"/rooms/x8y18z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crappy sales material in this dump. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
