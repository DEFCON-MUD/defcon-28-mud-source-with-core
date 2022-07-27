inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 44, 5 }));
  set_short( "Passage - x3y44z5" );
set_objects( DIR+"/monsters/greensnake.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y44z5.c",
  "north" : DIR+"/rooms/x3y45z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the gunk in this sty. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
