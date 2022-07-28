inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 48, 6 }));
  set_short( "Hallway - x17y48z6" );
set_objects( DIR+"/npc/biddleman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y49z6.c",
  "south" : DIR+"/rooms/x17y47z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
