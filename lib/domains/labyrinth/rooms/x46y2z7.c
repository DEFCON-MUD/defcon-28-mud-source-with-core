inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 2, 7 }));
  set_short( "Passage - x46y2z7" );
set_objects( DIR+"/npc/watersnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y2z7.c",
  "east" : DIR+"/rooms/x47y2z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
