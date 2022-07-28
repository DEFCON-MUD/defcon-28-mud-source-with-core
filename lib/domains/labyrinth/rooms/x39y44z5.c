inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 44, 5 }));
  set_short( "Hallway - x39y44z5" );
set_objects( DIR+"/npc/fireant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y44z5.c",
  "south" : DIR+"/rooms/x39y43z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crap in this area. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
