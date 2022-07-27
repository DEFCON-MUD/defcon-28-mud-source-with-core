inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 44, 1 }));
  set_short( "Hallway - x7y44z1" );
set_objects( DIR+"/monsters/edwardio.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y45z1.c",
  "south" : DIR+"/rooms/x7y43z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crappy sales material in this area. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
