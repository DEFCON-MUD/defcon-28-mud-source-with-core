inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 52, 7 }));
  set_short( "Hallway - x46y52z7" );
set_objects( DIR+"/npc/fern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y52z7.c",
  "east" : DIR+"/rooms/x47y52z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the glorzo in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
