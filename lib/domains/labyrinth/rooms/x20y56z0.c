inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 56, 0 }));
  set_short( "Corridor - x20y56z0" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y56z0.c",
  "east" : DIR+"/rooms/x21y56z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
