inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 58, 5 }));
  set_short( "Passage - x54y58z5" );
set_objects( DIR+"/npc/boa.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y58z5.c",
  "east" : DIR+"/rooms/x55y58z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the radioactive waste in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
