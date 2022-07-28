inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 31, 8 }));
  set_short( "Passage - x41y31z8" );
set_objects( DIR+"/npc/buddypetersen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y32z8.c",
  "south" : DIR+"/rooms/x41y30z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the gunk in this stink-pit. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
