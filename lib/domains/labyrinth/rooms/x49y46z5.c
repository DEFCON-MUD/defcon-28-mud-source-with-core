inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 46, 5 }));
  set_short( "Passage - x49y46z5" );
set_objects( DIR+"/npc/eastclerk.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y46z5.c",
  "south" : DIR+"/rooms/x49y45z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the gunk in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
