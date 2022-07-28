inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 53, 8 }));
  set_short( "Corridor - x29y53z8" );
set_objects( DIR+"/npc/freddy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y54z8.c",
  "south" : DIR+"/rooms/x29y52z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
