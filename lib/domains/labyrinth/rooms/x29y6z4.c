inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 6, 4 }));
  set_short( "Corridor - x29y6z4" );
set_objects( DIR+"/npc/zombie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y7z4.c",
  "south" : DIR+"/rooms/x29y5z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the gunk in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
