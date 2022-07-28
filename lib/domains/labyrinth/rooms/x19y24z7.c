inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 24, 7 }));
  set_short( "Passage - x19y24z7" );
set_objects( DIR+"/npc/log.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y25z7.c",
  "south" : DIR+"/rooms/x19y23z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
