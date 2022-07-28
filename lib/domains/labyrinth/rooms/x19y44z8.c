inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 44, 8 }));
  set_short( "Passage - x19y44z8" );
set_objects( DIR+"/npc/vonnewman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y45z8.c",
  "south" : DIR+"/rooms/x19y43z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crap in this area. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
