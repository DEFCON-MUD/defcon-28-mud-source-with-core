inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 62, 5 }));
  set_short( "Hallway - x43y62z5" );
set_objects( DIR+"/npc/heptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y62z5.c",
  "east" : DIR+"/rooms/x44y62z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
