inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 46, 1 }));
  set_short( "Corridor - x23y46z1" );
set_objects( DIR+"/npc/koretech.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y46z1.c",
  "east" : DIR+"/rooms/x24y46z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the sludge in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
