inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 58, 8 }));
  set_short( "Hallway - x56y58z8" );
set_objects( DIR+"/npc/salik.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y58z8.c",
  "east" : DIR+"/rooms/x57y58z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crud in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
