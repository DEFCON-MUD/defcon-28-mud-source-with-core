inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 2, 8 }));
  set_short( "Passage - x39y2z8" );
set_objects( DIR+"/npc/carson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y2z8.c",
  "east" : DIR+"/rooms/x40y2z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the sludge in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
