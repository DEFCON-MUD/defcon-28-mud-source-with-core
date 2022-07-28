inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 56, 5 }));
  set_short( "Passage - x51y56z5" );
set_objects( DIR+"/npc/buddypetersen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y56z5.c",
  "south" : DIR+"/rooms/x51y55z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the glorzo in this sty. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
