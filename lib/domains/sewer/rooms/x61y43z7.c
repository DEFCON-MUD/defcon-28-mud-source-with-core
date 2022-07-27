inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 43, 7 }));
  set_short( "Corridor - x61y43z7" );
set_objects( DIR+"/monsters/mutatekroh.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y44z7.c",
  "south" : DIR+"/rooms/x61y42z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
