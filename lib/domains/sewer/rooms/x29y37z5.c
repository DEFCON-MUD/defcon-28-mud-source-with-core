inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 37, 5 }));
  set_short( "Passage - x29y37z5" );
set_objects( DIR+"/monsters/eastauthorizer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y38z5.c",
  "south" : DIR+"/rooms/x29y36z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
