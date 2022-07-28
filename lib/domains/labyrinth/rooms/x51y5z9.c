inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 5, 9 }));
  set_short( "Passage - x51y5z9" );
set_objects( DIR+"/npc/bugsy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y6z9.c",
  "south" : DIR+"/rooms/x51y4z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crud in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
