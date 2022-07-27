inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 10, 6 }));
  set_short( "Passage - x35y10z6" );
set_objects( DIR+"/monsters/bouer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y10z6.c",
  "north" : DIR+"/rooms/x35y11z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
