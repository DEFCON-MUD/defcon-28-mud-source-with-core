inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 34, 8 }));
  set_short( "Passage - x41y34z8" );
set_objects( DIR+"/npc/bouncer2.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y34z8.c",
  "north" : DIR+"/rooms/x41y35z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
