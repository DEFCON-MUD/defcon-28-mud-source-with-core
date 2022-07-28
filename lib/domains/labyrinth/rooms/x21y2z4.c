inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 2, 4 }));
  set_short( "Passage - x21y2z4" );
set_objects( DIR+"/npc/treelizard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y2z4.c",
  "east" : DIR+"/rooms/x22y2z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
