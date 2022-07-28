inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 54, 2 }));
  set_short( "Passage - x19y54z2" );
set_objects( DIR+"/npc/jenny.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y54z2.c",
  "south" : DIR+"/rooms/x19y53z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
