inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 2, 7 }));
  set_short( "Corridor - x48y2z7" );
set_objects( DIR+"/monsters/r1elaine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y2z7.c",
  "east" : DIR+"/rooms/x49y2z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crappy sales material in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
