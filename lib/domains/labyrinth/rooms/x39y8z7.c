inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 8, 7 }));
  set_short( "Passage - x39y8z7" );
set_objects( DIR+"/npc/ratqueen.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y8z7.c",
  "south" : DIR+"/rooms/x39y7z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crud in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
