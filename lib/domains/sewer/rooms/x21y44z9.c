inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 44, 9 }));
  set_short( "Passage - x21y44z9" );
set_objects( DIR+"/monsters/r1elaine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y44z9.c",
  "east" : DIR+"/rooms/x22y44z9.c",
  "south" : DIR+"/rooms/x21y43z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the radioactive waste in this hellhole. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, east, and west.%^RESET%^");
}
