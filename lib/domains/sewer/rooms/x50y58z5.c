inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 58, 5 }));
  set_short( "Corridor - x50y58z5" );
set_objects( DIR+"/monsters/tawny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y58z5.c",
  "east" : DIR+"/rooms/x51y58z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
