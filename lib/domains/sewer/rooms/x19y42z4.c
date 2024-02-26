inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 42, 4 }));
  set_short( "Passage - x19y42z4" );
set_objects( DIR+"/monsters/teher.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y42z4.c",
  "south" : DIR+"/rooms/x19y41z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the gunk in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
