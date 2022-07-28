inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 25, 1 }));
  set_short( "Passage - x37y25z1" );
set_objects( DIR+"/npc/monzema.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y26z1.c",
  "south" : DIR+"/rooms/x37y24z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
