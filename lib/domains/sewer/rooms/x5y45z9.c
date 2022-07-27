inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 45, 9 }));
  set_short( "Corridor - x5y45z9" );
set_objects( DIR+"/monsters/panther.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y46z9.c",
  "south" : DIR+"/rooms/x5y44z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the radioactive waste in this hellhole. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
