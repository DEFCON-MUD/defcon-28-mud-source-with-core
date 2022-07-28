inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 58, 7 }));
  set_short( "Hallway - x55y58z7" );
set_objects( DIR+"/npc/outfitterrobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y58z7.c",
  "north" : DIR+"/rooms/x55y59z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the gunk in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
