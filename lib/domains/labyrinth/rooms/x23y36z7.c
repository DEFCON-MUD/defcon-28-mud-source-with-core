inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 36, 7 }));
  set_short( "Hallway - x23y36z7" );
set_objects( DIR+"/npc/r1radsensor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y36z7.c",
  "north" : DIR+"/rooms/x23y37z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crud in this dump. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
