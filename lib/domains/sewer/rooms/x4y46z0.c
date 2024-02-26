inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 46, 0 }));
  set_short( "Corridor - x4y46z0" );
set_objects( DIR+"/monsters/watersnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y46z0.c",
  "east" : DIR+"/rooms/x5y46z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the gunk in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
