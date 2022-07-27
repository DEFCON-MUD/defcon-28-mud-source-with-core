inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 30, 2 }));
  set_short( "Hallway - x16y30z2" );
set_objects( DIR+"/monsters/warrior.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y30z2.c",
  "east" : DIR+"/rooms/x17y30z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the gunk in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
