inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 19, 9 }));
  set_short( "Passage - x29y19z9" );
set_objects( DIR+"/monsters/iguana.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y20z9.c",
  "south" : DIR+"/rooms/x29y18z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the pile of put kevin back stickers in this area. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
