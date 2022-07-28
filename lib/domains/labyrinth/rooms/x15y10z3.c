inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 10, 3 }));
  set_short( "Corridor - x15y10z3" );
set_objects( DIR+"/npc/radgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y10z3.c",
  "east" : DIR+"/rooms/x16y10z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
