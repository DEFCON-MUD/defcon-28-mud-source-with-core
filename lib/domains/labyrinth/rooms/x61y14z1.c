inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 14, 1 }));
  set_short( "Passage - x61y14z1" );
set_objects( DIR+"/npc/greensnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y14z1.c",
  "south" : DIR+"/rooms/x61y13z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the glorzo in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
