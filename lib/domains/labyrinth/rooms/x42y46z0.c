inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 46, 0 }));
  set_short( "Passage - x42y46z0" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y46z0.c",
  "east" : DIR+"/rooms/x43y46z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
