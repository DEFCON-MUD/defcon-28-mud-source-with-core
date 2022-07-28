inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 38, 9 }));
  set_short( "Hallway - x37y38z9" );
set_objects( DIR+"/npc/log.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y38z9.c",
  "south" : DIR+"/rooms/x37y37z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
