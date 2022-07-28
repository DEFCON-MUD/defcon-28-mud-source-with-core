inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 12, 7 }));
  set_short( "Passage - x15y12z7" );
set_objects( DIR+"/npc/japanesebeetle.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y13z7.c",
  "south" : DIR+"/rooms/x15y11z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
