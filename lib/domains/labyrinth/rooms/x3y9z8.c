inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 9, 8 }));
  set_short( "Passage - x3y9z8" );
set_objects( DIR+"/npc/mei.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y10z8.c",
  "south" : DIR+"/rooms/x3y8z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crud in this stink-pit. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
