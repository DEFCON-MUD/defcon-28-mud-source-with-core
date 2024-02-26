inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 58, 7 }));
  set_short( "Corridor - x35y58z7" );
set_objects( DIR+"/monsters/professor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y58z7.c",
  "east" : DIR+"/rooms/x36y58z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crappy sales material in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
