inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 52, 2 }));
  set_short( "Corridor - x6y52z2" );
set_objects( DIR+"/npc/cagedancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y52z2.c",
  "east" : DIR+"/rooms/x7y52z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the gunk in this stink-pit. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
