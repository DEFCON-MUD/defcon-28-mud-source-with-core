inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 60, 0 }));
  set_short( "Hallway - x30y60z0" );
set_objects( DIR+"/npc/vipbouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y60z0.c",
  "east" : DIR+"/rooms/x31y60z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crud in this stink-pit. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
