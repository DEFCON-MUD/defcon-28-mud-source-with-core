inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 22, 5 }));
  set_short( "Corridor - x38y22z5" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y22z5.c",
  "east" : DIR+"/rooms/x39y22z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the glorzo in this joint. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
