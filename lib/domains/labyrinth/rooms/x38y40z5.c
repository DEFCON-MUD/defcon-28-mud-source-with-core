inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 40, 5 }));
  set_short( "Hallway - x38y40z5" );
set_objects( DIR+"/npc/panther.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y40z5.c",
  "east" : DIR+"/rooms/x39y40z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crap in this dump. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
