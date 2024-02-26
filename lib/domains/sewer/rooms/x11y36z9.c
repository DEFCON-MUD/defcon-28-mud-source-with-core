inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 36, 9 }));
  set_short( "Hallway - x11y36z9" );
set_objects( DIR+"/monsters/lil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y36z9.c",
  "north" : DIR+"/rooms/x11y37z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the glorzo in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
