inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 12, 5 }));
  set_short( "Passage - x22y12z5" );
set_objects( DIR+"/npc/lulams.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y12z5.c",
  "east" : DIR+"/rooms/x23y12z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crud in this area. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
