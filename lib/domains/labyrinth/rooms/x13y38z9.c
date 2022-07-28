inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 38, 9 }));
  set_short( "Hallway - x13y38z9" );
set_objects( DIR+"/npc/kendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y38z9.c",
  "east" : DIR+"/rooms/x14y38z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
