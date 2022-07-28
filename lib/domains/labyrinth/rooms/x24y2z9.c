inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 2, 9 }));
  set_short( "Hallway - x24y2z9" );
set_objects( DIR+"/npc/eastfilingclerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y2z9.c",
  "east" : DIR+"/rooms/x25y2z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
