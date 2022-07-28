inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 19, 2 }));
  set_short( "Hallway - x29y19z2" );
set_objects( DIR+"/npc/boar.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y20z2.c",
  "south" : DIR+"/rooms/x29y18z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the gunk in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
