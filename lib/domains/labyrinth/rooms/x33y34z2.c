inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 34, 2 }));
  set_short( "Hallway - x33y34z2" );
set_objects( DIR+"/npc/greensnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y34z2.c",
  "north" : DIR+"/rooms/x33y35z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crud in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
