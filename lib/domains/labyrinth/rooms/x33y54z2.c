inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 54, 2 }));
  set_short( "Passage - x33y54z2" );
set_objects( DIR+"/npc/securityofficer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y54z2.c",
  "south" : DIR+"/rooms/x33y53z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crud in this sty. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
