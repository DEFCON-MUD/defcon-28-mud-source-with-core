inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 31, 6 }));
  set_short( "Passage - x29y31z6" );
set_objects( DIR+"/npc/radgoo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y32z6.c",
  "south" : DIR+"/rooms/x29y30z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the gunk in this joint. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
