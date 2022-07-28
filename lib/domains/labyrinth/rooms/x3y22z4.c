inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 22, 4 }));
  set_short( "Corridor - x3y22z4" );
set_objects( DIR+"/npc/mamba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y22z4.c",
  "north" : DIR+"/rooms/x3y23z4.c",
  "south" : DIR+"/rooms/x3y21z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the gunk in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, north, and west.%^RESET%^");
}
