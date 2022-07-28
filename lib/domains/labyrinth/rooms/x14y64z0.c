inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 64, 0 }));
  set_short( "Hallway - x14y64z0" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y64z0.c",
  "east" : DIR+"/rooms/x15y64z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the gunk in this sty. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
