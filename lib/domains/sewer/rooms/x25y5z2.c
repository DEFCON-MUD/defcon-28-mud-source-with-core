inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 5, 2 }));
  set_short( "Passage - x25y5z2" );
set_objects( DIR+"/monsters/norman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y6z2.c",
  "south" : DIR+"/rooms/x25y4z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the muck in this dump. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
