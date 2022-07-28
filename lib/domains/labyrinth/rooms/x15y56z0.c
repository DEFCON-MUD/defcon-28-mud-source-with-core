inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 56, 0 }));
  set_short( "Passage - x15y56z0" );
set_objects( DIR+"/npc/edwardio.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y56z0.c",
  "north" : DIR+"/rooms/x15y57z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
