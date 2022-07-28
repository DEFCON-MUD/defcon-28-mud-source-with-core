inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 58, 7 }));
  set_short( "Hallway - x44y58z7" );
set_objects( DIR+"/npc/john.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y58z7.c",
  "east" : DIR+"/rooms/x45y58z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the gunk in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
