inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 18, 2 }));
  set_short( "Corridor - x22y18z2" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y18z2.c",
  "east" : DIR+"/rooms/x23y18z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
