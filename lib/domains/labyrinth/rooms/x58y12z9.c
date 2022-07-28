inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 12, 9 }));
  set_short( "Corridor - x58y12z9" );
set_objects( DIR+"/npc/craig.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y12z9.c",
  "east" : DIR+"/rooms/x59y12z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
