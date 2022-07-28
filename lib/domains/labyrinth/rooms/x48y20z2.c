inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 20, 2 }));
  set_short( "Passage - x48y20z2" );
set_objects( DIR+"/npc/massiveweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y20z2.c",
  "east" : DIR+"/rooms/x49y20z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crappy sales material in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
