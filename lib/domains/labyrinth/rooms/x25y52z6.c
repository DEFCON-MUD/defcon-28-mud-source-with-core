inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 52, 6 }));
  set_short( "Corridor - x25y52z6" );
set_objects( DIR+"/npc/ken.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y52z6.c",
  "east" : DIR+"/rooms/x26y52z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crud in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
