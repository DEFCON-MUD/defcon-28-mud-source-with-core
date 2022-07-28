inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 40, 7 }));
  set_short( "Passage - x13y40z7" );
set_objects( DIR+"/npc/r1zerky.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y41z7.c",
  "south" : DIR+"/rooms/x13y39z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
