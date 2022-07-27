inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 46, 5 }));
  set_short( "Corridor - x34y46z5" );
set_objects( DIR+"/monsters/vampire.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y46z5.c",
  "east" : DIR+"/rooms/x35y46z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
