inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 15, 8 }));
  set_short( "Passage - x59y15z8" );
set_objects( DIR+"/npc/snapperjaw.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y16z8.c",
  "south" : DIR+"/rooms/x59y14z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the glorzo in this dump. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
