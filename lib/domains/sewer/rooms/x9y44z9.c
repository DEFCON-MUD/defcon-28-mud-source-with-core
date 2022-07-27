inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 44, 9 }));
  set_short( "Corridor - x9y44z9" );
set_objects( DIR+"/monsters/baboon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y44z9.c",
  "south" : DIR+"/rooms/x9y43z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
