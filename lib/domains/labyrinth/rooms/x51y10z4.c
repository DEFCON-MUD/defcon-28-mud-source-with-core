inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 10, 4 }));
  set_short( "Hallway - x51y10z4" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y10z4.c",
  "north" : DIR+"/rooms/x51y11z4.c",
  "south" : DIR+"/rooms/x51y9z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the gunk in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, north, and west.%^RESET%^");
}
