inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 50, 4 }));
  set_short( "Corridor - x59y50z4" );
set_objects( DIR+"/npc/groupie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y50z4.c",
  "east" : DIR+"/rooms/x60y50z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the glorzo in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
