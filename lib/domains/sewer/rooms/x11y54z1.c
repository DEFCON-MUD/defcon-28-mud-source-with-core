inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 54, 1 }));
  set_short( "Passage - x11y54z1" );
set_objects( DIR+"/monsters/eastauthorizer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y54z1.c",
  "south" : DIR+"/rooms/x11y53z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the gunk in this joint. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
