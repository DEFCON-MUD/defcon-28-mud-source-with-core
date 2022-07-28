inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 56, 5 }));
  set_short( "Hallway - x23y56z5" );
set_objects( DIR+"/npc/vipbouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y56z5.c",
  "south" : DIR+"/rooms/x23y55z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
