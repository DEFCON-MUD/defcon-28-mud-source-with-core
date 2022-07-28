inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 20, 2 }));
  set_short( "Hallway - x7y20z2" );
set_objects( DIR+"/npc/lyndia.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y20z2.c",
  "north" : DIR+"/rooms/x7y21z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
