inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 34, 2 }));
  set_short( "Hallway - x22y34z2" );
set_objects( DIR+"/npc/greensnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y34z2.c",
  "east" : DIR+"/rooms/x23y34z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the gunk in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
