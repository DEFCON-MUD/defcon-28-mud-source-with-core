inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 7, 5 }));
  set_short( "Corridor - x29y7z5" );
set_objects( DIR+"/monsters/autod.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y8z5.c",
  "south" : DIR+"/rooms/x29y6z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crappy sales material in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
